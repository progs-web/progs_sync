#include "configuracao.h"
#include <QDebug>
#include <QMimeData>
#include <QDragEnterEvent>
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QStandardPaths>

Configuracao::Configuracao(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);

    // habilita drag and drop
    setAcceptDrops(true);

    // posiciona o TabWidget no centro
    setCentralWidget(tabWidget);
    tabWidget->setCurrentIndex(1);

    // esconde as barras de progressso
    progressFile->hide();
    progressTotal->hide();

    // conexões gerais

}

QStringList Configuracao::listaArquivos() const
{
    return m_listaArquivos;
}

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
        QListWidgetItem *item = new QListWidgetItem(listFile);

        item->setText(fileName);
        //listFile->ins
        qDebug() << fileName;
    }
    listFile->update();
}

void Configuracao::setListaArquivos(QStringList listaArquivos)
{
    if (m_listaArquivos == listaArquivos)
        return;

    m_listaArquivos = listaArquivos;
    emit listaArquivosChanged(listaArquivos);
}

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
        QListWidgetItem *item = new QListWidgetItem(listFile);

        item->setText(*i);
    }
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
        QListWidgetItem *item = new QListWidgetItem(listFile);

        item->setText(*i);
    }
}

void Configuracao::on_bntRemover_clicked()
{
    QListWidgetItem *item = listFile->takeItem(listFile->currentRow());
    listFile->removeItemWidget(item);
}

void Configuracao::on_btnEnviar_clicked()
{

}

void Configuracao::on_btnCancelar_clicked()
{

}



void Configuracao::on_bntLimpar_clicked()
{
    listFile->clear();
}
