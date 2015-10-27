#include "configuracao.h"

Configuracao::Configuracao(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    setCentralWidget(tabWidget);
    progressBar->hide();
}
