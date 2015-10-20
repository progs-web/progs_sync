/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnEntrar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtEmail;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtSenha;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(300, 400);
        MainWindow->setMinimumSize(QSize(300, 400));
        MainWindow->setMaximumSize(QSize(300, 400));
        MainWindow->setStyleSheet(QStringLiteral("background-color:white"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnEntrar = new QPushButton(centralWidget);
        btnEntrar->setObjectName(QStringLiteral("btnEntrar"));
        btnEntrar->setGeometry(QRect(30, 300, 96, 30));
        btnEntrar->setAutoFillBackground(true);
        btnEntrar->setStyleSheet(QStringLiteral("background-color:qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(137, 137, 137, 255), stop:1 rgba(255, 255, 255, 255))"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 160, 254, 72));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 30));
        label->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(label);

        edtEmail = new QLineEdit(widget);
        edtEmail->setObjectName(QStringLiteral("edtEmail"));
        edtEmail->setMinimumSize(QSize(200, 30));
        edtEmail->setMaximumSize(QSize(200, 30));
        edtEmail->setAutoFillBackground(false);
        edtEmail->setStyleSheet(QLatin1String("background-color:white\n"
""));

        horizontalLayout->addWidget(edtEmail);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(50, 30));
        label_2->setMaximumSize(QSize(50, 30));

        horizontalLayout_2->addWidget(label_2);

        edtSenha = new QLineEdit(widget);
        edtSenha->setObjectName(QStringLiteral("edtSenha"));
        edtSenha->setMinimumSize(QSize(200, 30));
        edtSenha->setMaximumSize(QSize(200, 30));
        edtSenha->setAutoFillBackground(false);
        edtSenha->setStyleSheet(QStringLiteral("background-color:white"));
        edtSenha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(edtSenha);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Progs Sync", 0));
        btnEntrar->setText(QApplication::translate("MainWindow", "entrar", 0));
        label->setText(QApplication::translate("MainWindow", "E-Mail", 0));
        label_2->setText(QApplication::translate("MainWindow", "Senha", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
