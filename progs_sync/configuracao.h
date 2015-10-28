#ifndef CONFIGURACAO_H
#define CONFIGURACAO_H

#include "ui_configuracao.h"
#include <QStringListModel>

class Configuracao : public QMainWindow, private Ui::Configuracao
{
    Q_OBJECT
    Q_PROPERTY(QStringList listaArquivos READ listaArquivos WRITE setListaArquivos NOTIFY listaArquivosChanged)
    //Q_PROPERTY(int quantidadeArquivos READ quantidadeArquivos WRITE setQuantidadeArquivos NOTIFY quantidadeArquivosChanged)


public:
    explicit Configuracao(QWidget *parent = 0);

    QStringList listaArquivos() const;


protected:
    void dragEnterEvent(QDragEnterEvent * event);
    void dragLeaveEvent(QDragLeaveEvent * event);
    void dragMoveEvent(QDragMoveEvent * event);
    void dropEvent(QDropEvent * event);

public slots:    
    void setListaArquivos(QStringList listaArquivos);


signals:
    void listaArquivosChanged(QStringList listaArquivos);

private slots:
    void on_bntAdicionar_clicked();
    void on_bntAdcionarDiretorio_clicked();
    void on_bntRemover_clicked();
    void on_btnEnviar_clicked();
    void on_btnCancelar_clicked();



    void on_bntLimpar_clicked();

private:
    QStringListModel *m_listModel;    
    QStringList m_listaArquivos;
};

#endif // CONFIGURACAO_H
