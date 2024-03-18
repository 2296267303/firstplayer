/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <ctrlbar.h>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QWidget *centralwidget;
    QWidget *showCtrlBarBgWidget;
    CtrlBar *ctrlBarWind;
    QLabel *label;
    QWidget *showWind;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *playListDockWidget;
    QWidget *playListContents;
    QLabel *label_3;
    QToolBar *toolBar;
    QDockWidget *titleDockWidget;
    QWidget *titleContents;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QString::fromUtf8("MainWin"));
        MainWin->resize(1280, 800);
        centralwidget = new QWidget(MainWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        showCtrlBarBgWidget = new QWidget(centralwidget);
        showCtrlBarBgWidget->setObjectName(QString::fromUtf8("showCtrlBarBgWidget"));
        showCtrlBarBgWidget->setGeometry(QRect(50, 20, 1131, 681));
        ctrlBarWind = new CtrlBar(showCtrlBarBgWidget);
        ctrlBarWind->setObjectName(QString::fromUtf8("ctrlBarWind"));
        ctrlBarWind->setGeometry(QRect(40, 600, 941, 60));
        label = new QLabel(ctrlBarWind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 0, 72, 15));
        showWind = new QWidget(showCtrlBarBgWidget);
        showWind->setObjectName(QString::fromUtf8("showWind"));
        showWind->setGeometry(QRect(20, 30, 1061, 541));
        label_2 = new QLabel(showWind);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 270, 72, 15));
        MainWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 26));
        MainWin->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWin->setStatusBar(statusbar);
        playListDockWidget = new QDockWidget(MainWin);
        playListDockWidget->setObjectName(QString::fromUtf8("playListDockWidget"));
        playListContents = new QWidget();
        playListContents->setObjectName(QString::fromUtf8("playListContents"));
        label_3 = new QLabel(playListContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 310, 72, 15));
        playListDockWidget->setWidget(playListContents);
        MainWin->addDockWidget(Qt::RightDockWidgetArea, playListDockWidget);
        toolBar = new QToolBar(MainWin);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWin->addToolBar(Qt::TopToolBarArea, toolBar);
        titleDockWidget = new QDockWidget(MainWin);
        titleDockWidget->setObjectName(QString::fromUtf8("titleDockWidget"));
        titleContents = new QWidget();
        titleContents->setObjectName(QString::fromUtf8("titleContents"));
        label_4 = new QLabel(titleContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(441, -1, 141, 21));
        titleDockWidget->setWidget(titleContents);
        MainWin->addDockWidget(Qt::TopDockWidgetArea, titleDockWidget);

        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin)
    {
        MainWin->setWindowTitle(QCoreApplication::translate("MainWin", "MainWin", nullptr));
        label->setText(QCoreApplication::translate("MainWin", "\346\216\247\345\210\266\346\235\241", nullptr));
        label_2->setText(QCoreApplication::translate("MainWin", "\346\230\276\347\244\272\347\224\273\351\235\242", nullptr));
        label_3->setText(QCoreApplication::translate("MainWin", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWin", "toolBar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWin", "\346\222\255\346\224\276\345\231\250\345\220\215\345\255\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
