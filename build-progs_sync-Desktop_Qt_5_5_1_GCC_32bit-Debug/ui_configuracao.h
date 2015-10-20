/********************************************************************************
** Form generated from reading UI file 'configuracao.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACAO_H
#define UI_CONFIGURACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configuracao
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QCheckBox *ckbGravar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtHost;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edtUser;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *edtPass;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *edtPort;
    QWidget *tab_2;
    QTreeView *treeView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Configuracao)
    {
        if (Configuracao->objectName().isEmpty())
            Configuracao->setObjectName(QStringLiteral("Configuracao"));
        Configuracao->setWindowModality(Qt::NonModal);
        Configuracao->resize(500, 350);
        Configuracao->setMinimumSize(QSize(500, 350));
        Configuracao->setMaximumSize(QSize(500, 350));
        centralwidget = new QWidget(Configuracao);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 460, 270));
        tabWidget->setMinimumSize(QSize(460, 270));
        tabWidget->setMaximumSize(QSize(460, 270));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 190, 151, 30));
        ckbGravar = new QCheckBox(tab);
        ckbGravar->setObjectName(QStringLiteral("ckbGravar"));
        ckbGravar->setGeometry(QRect(320, 80, 96, 25));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 258, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 20));
        label->setMaximumSize(QSize(50, 20));

        horizontalLayout->addWidget(label);

        edtHost = new QLineEdit(widget);
        edtHost->setObjectName(QStringLiteral("edtHost"));
        edtHost->setMinimumSize(QSize(200, 30));
        edtHost->setMaximumSize(QSize(200, 30));
        edtHost->setAutoFillBackground(true);

        horizontalLayout->addWidget(edtHost);

        widget1 = new QWidget(tab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 70, 258, 32));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(50, 20));
        label_2->setMaximumSize(QSize(50, 20));

        horizontalLayout_2->addWidget(label_2);

        edtUser = new QLineEdit(widget1);
        edtUser->setObjectName(QStringLiteral("edtUser"));
        edtUser->setMinimumSize(QSize(200, 30));
        edtUser->setMaximumSize(QSize(200, 30));
        edtUser->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(edtUser);

        widget2 = new QWidget(tab);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(20, 120, 258, 32));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(50, 20));
        label_3->setMaximumSize(QSize(50, 20));

        horizontalLayout_3->addWidget(label_3);

        edtPass = new QLineEdit(widget2);
        edtPass->setObjectName(QStringLiteral("edtPass"));
        edtPass->setMinimumSize(QSize(200, 30));
        edtPass->setMaximumSize(QSize(200, 30));
        edtPass->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(edtPass);

        widget3 = new QWidget(tab);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(320, 20, 108, 32));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(50, 20));
        label_4->setMaximumSize(QSize(50, 20));

        horizontalLayout_4->addWidget(label_4);

        edtPort = new QLineEdit(widget3);
        edtPort->setObjectName(QStringLiteral("edtPort"));
        edtPort->setMinimumSize(QSize(50, 30));
        edtPort->setMaximumSize(QSize(50, 30));
        edtPort->setAutoFillBackground(true);

        horizontalLayout_4->addWidget(edtPort);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        treeView = new QTreeView(tab_2);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 10, 421, 201));
        treeView->setAcceptDrops(true);
        treeView->setAutoFillBackground(true);
        tabWidget->addTab(tab_2, QString());
        Configuracao->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Configuracao);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Configuracao->setStatusBar(statusbar);

        retranslateUi(Configuracao);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Configuracao);
    } // setupUi

    void retranslateUi(QMainWindow *Configuracao)
    {
        Configuracao->setWindowTitle(QApplication::translate("Configuracao", "MainWindow", 0));
        pushButton->setText(QApplication::translate("Configuracao", "testar conex\303\243o", 0));
        ckbGravar->setText(QApplication::translate("Configuracao", "gravar", 0));
        label->setText(QApplication::translate("Configuracao", "Host", 0));
        label_2->setText(QApplication::translate("Configuracao", "User", 0));
        label_3->setText(QApplication::translate("Configuracao", "Passwd", 0));
        label_4->setText(QApplication::translate("Configuracao", "port", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Configuracao", "Servidor", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Configuracao", "Arquivos e Pastas", 0));
    } // retranslateUi

};

namespace Ui {
    class Configuracao: public Ui_Configuracao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACAO_H
