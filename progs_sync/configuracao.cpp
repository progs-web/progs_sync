#include "configuracao.h"
#include <QMimeData>
#include <QDragEnterEvent>
#include <QFile>

Configuracao::Configuracao(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    setAcceptDrops(true);
    setCentralWidget(tabWidget);
    progressFile->hide();
    progressTotal->hide();
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
      listFile->addItem(fileName);
    }

}
