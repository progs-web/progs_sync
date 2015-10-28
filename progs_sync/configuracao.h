#ifndef CONFIGURACAO_H
#define CONFIGURACAO_H

#include "ui_configuracao.h"

class Configuracao : public QMainWindow, private Ui::Configuracao
{
    Q_OBJECT
    //Q_PROPERTY(QStringList listaArquivos READ listaArquivos WRITE setListaArquivos NOTIFY listaArquivosChanged)
    //Q_PROPERTY(int quantidadeArquivos READ quantidadeArquivos WRITE setQuantidadeArquivos NOTIFY quantidadeArquivosChanged)


public:
    explicit Configuracao(QWidget *parent = 0);

protected:
    void dragEnterEvent(QDragEnterEvent * event);
    void dragLeaveEvent(QDragLeaveEvent * event);
    void dragMoveEvent(QDragMoveEvent * event);
    void dropEvent(QDropEvent * event);
public slots:


signals:


private:

};

#endif // CONFIGURACAO_H
