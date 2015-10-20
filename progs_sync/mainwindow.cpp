#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnEntrar_clicked()
{

    QString email = ui->edtEmail->text();
    QString senha = ui->edtSenha->text();


c.show();


    //QMessageBox::about(0,"ALexandre","Email"+email+" senha :"+senha);

}
