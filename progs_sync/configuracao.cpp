#include "configuracao.h"
#include <QDebug>
#include <QMimeData>
#include <QDragEnterEvent>
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QStandardPaths>
#include <QTreeWidgetItem>


// construtor da classe
Configuracao::Configuracao(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);

    // habilita drag and drop
    setAcceptDrops(true);

    // posiciona o TabWidget no centro
    setCentralWidget(tabWidget);
    tabWidget->setCurrentIndex(1);

    listFileRemoto->setEnabled(false);
    listFileRemoto->setRootIsDecorated(false);
    listFileRemoto->setHeaderLabels(QStringList() << tr("Name") << tr("Size") << tr("Owner") << tr("Group") << tr("Time"));
    listFileRemoto->header()->setStretchLastSection(false);


    // esconde as barras de progressso
    progressFile->hide();
    progressTotal->hide();

    // instancias gerais
    ftp = new QFtp(this);
    ftp->setTransferMode(QFtp::Active);

    // conexões gerais
    connect(ftp, SIGNAL(stateChanged(int)), this, SLOT(ftpStatus(int)));
    connect(ftp, SIGNAL(listInfo(QUrlInfo)), this, SLOT(addAlista(QUrlInfo)));
    connect(listFileRemoto, SIGNAL(itemActivated(QTreeWidgetItem*,int)), this, SLOT(processFile(QTreeWidgetItem*)));
}

// métodos configuração
QStringList Configuracao::listaArquivos() const
{
    return m_listaArquivos;
}

void Configuracao::setListaArquivos(QStringList listaArquivos)
{
    if (m_listaArquivos == listaArquivos)
        return;

    m_listaArquivos = listaArquivos;
    emit listaArquivosChanged(listaArquivos);
}

// métodos drag and drop
void Configuracao::dragEnterEvent(QDragEnterEvent *event)
{
    event->accept();
}

void Configuracao::dragLeaveEvent(QDragLeaveEvent *event)
{
    event->accept();
}

void Configuracao::dragMoveEvent(QDragMoveEvent *event)
{
    event->accept();
}

void Configuracao::dropEvent(QDropEvent *event)
{
    QString fileName;
    QList<QUrl> urls;
    QList<QUrl>::Iterator i;
    urls = event->mimeData()->urls();
    for(i = urls.begin(); i != urls.end(); ++i){
        fileName = i->toLocalFile();
        //QFile file(fileName);
        //QListWidgetItem *item = new QListWidgetItem(listFile);

        //item->setText(fileName);
        //listFile->ins
        qDebug() << fileName;
    }
    listFile->update();
}

// aba arquivos e pastas
void Configuracao::on_bntAdicionar_clicked()
{
    QStringList fileNames;
    QStringList::iterator i;
    QString homeLocation = QStandardPaths::writableLocation( QStandardPaths::HomeLocation );
    QFileDialog dialog(this);
    dialog.setDirectory(homeLocation);
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        fileNames = dialog.selectedFiles();
    for(i = fileNames.begin(); i != fileNames.end(); ++i){

    }
    //        QListWidgetItem *item = new QListWidgetItem(listFile);
    //        item->setText(*i);

}

void Configuracao::on_bntAdcionarDiretorio_clicked()
{
    QStringList fileNames;
    QStringList::iterator i;
    QString homeLocation = QStandardPaths::writableLocation( QStandardPaths::HomeLocation );
    QFileDialog dialog(this);
    dialog.setDirectory(homeLocation);
    dialog.setFileMode(QFileDialog::DirectoryOnly);

    if (dialog.exec())
        fileNames = dialog.selectedFiles();
    for(i = fileNames.begin(); i != fileNames.end(); ++i){
    }
    //    QListWidgetItem *item = new QListWidgetItem(listFile);
    //    item->setText(*i);
}

void Configuracao::on_bntRemover_clicked()
{
    //    QTreetWidgetItem *item = listFile->takeItem(listFile->currentRow());
    //    listFile->removeItemWidget(item);
}

void Configuracao::on_btnEnviar_clicked()
{

}

void Configuracao::on_btnCancelar_clicked()
{
    ftp->abort();
}

void Configuracao::on_bntLimpar_clicked()
{
    listFile->clear();
}

// aba servidor
void Configuracao::on_bntTestConnection_clicked()
{
    if(ftp->state() != QFtp::Unconnected)
        ftp->close();
    QUrl url;
    url.setHost(lineHost->text());
    url.setUserName(lineUser->text(), QUrl::StrictMode);
    url.setPassword(linePass->text(), QUrl::StrictMode);
    ftp->connectToHost(lineHost->text(), spinPorta->value());

    ftp->login(lineUser->text(), linePass->text());
    ftp->cd(lineDiretorio->text());
    ftp->list("/");
}

void Configuracao::on_bntSalvarConf_clicked()
{
    qDebug() << "Salvo" ;
}

// ftp class
void Configuracao::connectOrDisconnect()
{

}

void Configuracao::ftpStatus(int estado)
{
    switch (estado) {
    case QFtp::Unconnected:
        statusbar->showMessage("Desconectado");
        qDebug() << "desconectado";
        break;
    case QFtp::HostLookup:
        statusbar->showMessage("Host Lookup");
        qDebug() << "host lookup";
        break;
    case QFtp::Connecting:
        statusbar->showMessage("Conectando");
        qDebug() << "conectando";
        break;
    case QFtp::Connected:
        statusbar->showMessage("Conectado");
        qDebug() << "conectado";
        break;
    case QFtp::LoggedIn:
        statusbar->showMessage("Logado");
        qDebug() << "logado";
        qDebug() << ftp->errorString();
        break;
    case QFtp::Closing:
        statusbar->showMessage("Fechado");
        qDebug() << "fechado";
        break;
    default:
        break;
    }
}

void Configuracao::addAlista(const QUrlInfo &urlInfo)
{
    QTreeWidgetItem *item = new QTreeWidgetItem;
         item->setText(0, urlInfo.name());
         item->setText(1, QString::number(urlInfo.size()));
         item->setText(2, urlInfo.owner());
         item->setText(3, urlInfo.group());
         item->setText(4, urlInfo.lastModified().toString("MMM dd yyyy"));

         QPixmap pixmap(urlInfo.isDir() ? ":/img/dir.png" : ":/img/file.png");
         item->setIcon(0, pixmap);

         isDirectory[urlInfo.name()] = urlInfo.isDir();
         listFileRemoto->addTopLevelItem(item);
         //fileList->addTopLevelItem(item);
         if (!listFileRemoto->currentItem()) {
             listFileRemoto->setCurrentItem(listFileRemoto->topLevelItem(0));
             listFileRemoto->setEnabled(true);
         }
//     qDebug() << urlInfo.name() << QString::number(urlInfo.size()) << urlInfo.owner() <<
         //     urlInfo.group() << urlInfo.lastModified().toString("MMM dd yyyy");
}

void Configuracao::processFile(QTreeWidgetItem *item)
{
    QString name = item->text(0);
         if (isDirectory.value(name)) {
             listFileRemoto->clear();
             isDirectory.clear();
             currentPath += '/';
             currentPath += name;
             ftp->cd(name);
             ftp->list();
     #ifndef QT_NO_CURSOR
             setCursor(Qt::WaitCursor);
     #endif
             return;
         }
}

