#ifndef CONFIGURACAO_H
#define CONFIGURACAO_H

#include "ui_configuracao.h"

class Configuracao : public QMainWindow, private Ui::Configuracao
{
    Q_OBJECT

public:
    explicit Configuracao(QWidget *parent = 0);
};

#endif // CONFIGURACAO_H
