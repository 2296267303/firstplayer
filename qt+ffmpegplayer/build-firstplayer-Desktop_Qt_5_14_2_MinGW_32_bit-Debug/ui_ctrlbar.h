/********************************************************************************
** Form generated from reading UI file 'ctrlbar.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLBAR_H
#define UI_CTRLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlBar
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *stopBtn;
    QPushButton *forwardBtn;
    QPushButton *settingBtn;
    QPushButton *playOrPause;
    QPushButton *playListBtn;
    QLabel *label;
    QTimeEdit *playTimeEdit;
    QPushButton *BackwardBtn;
    QTimeEdit *totalTimeEdit;
    QPushButton *speedBtn;
    QWidget *widget;
    QSlider *playSlider;
    QWidget *widget_2;
    QSlider *horizontalSlider_2;
    QPushButton *volumeBtn;

    void setupUi(QWidget *CtrlBar)
    {
        if (CtrlBar->objectName().isEmpty())
            CtrlBar->setObjectName(QString::fromUtf8("CtrlBar"));
        CtrlBar->resize(600, 60);
        CtrlBar->setMaximumSize(QSize(16777215, 100));
        gridLayoutWidget = new QWidget(CtrlBar);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-10, 30, 611, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stopBtn = new QPushButton(gridLayoutWidget);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));
        stopBtn->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(stopBtn, 0, 1, 1, 1);

        forwardBtn = new QPushButton(gridLayoutWidget);
        forwardBtn->setObjectName(QString::fromUtf8("forwardBtn"));
        forwardBtn->setMinimumSize(QSize(100, 30));
        forwardBtn->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(forwardBtn, 0, 4, 1, 1);

        settingBtn = new QPushButton(gridLayoutWidget);
        settingBtn->setObjectName(QString::fromUtf8("settingBtn"));
        settingBtn->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(settingBtn, 0, 9, 1, 1);

        playOrPause = new QPushButton(gridLayoutWidget);
        playOrPause->setObjectName(QString::fromUtf8("playOrPause"));
        playOrPause->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(playOrPause, 0, 0, 1, 1);

        playListBtn = new QPushButton(gridLayoutWidget);
        playListBtn->setObjectName(QString::fromUtf8("playListBtn"));
        playListBtn->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(playListBtn, 0, 8, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(10, 16777215));

        gridLayout->addWidget(label, 0, 6, 1, 1);

        playTimeEdit = new QTimeEdit(gridLayoutWidget);
        playTimeEdit->setObjectName(QString::fromUtf8("playTimeEdit"));
        playTimeEdit->setMinimumSize(QSize(70, 0));
        playTimeEdit->setMaximumSize(QSize(90, 16777215));
        playTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(playTimeEdit, 0, 5, 1, 1);

        BackwardBtn = new QPushButton(gridLayoutWidget);
        BackwardBtn->setObjectName(QString::fromUtf8("BackwardBtn"));
        BackwardBtn->setMinimumSize(QSize(0, 30));
        BackwardBtn->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(BackwardBtn, 0, 2, 1, 1);

        totalTimeEdit = new QTimeEdit(gridLayoutWidget);
        totalTimeEdit->setObjectName(QString::fromUtf8("totalTimeEdit"));
        totalTimeEdit->setMinimumSize(QSize(70, 0));
        totalTimeEdit->setMaximumSize(QSize(90, 16777215));
        totalTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(totalTimeEdit, 0, 7, 1, 1);

        speedBtn = new QPushButton(gridLayoutWidget);
        speedBtn->setObjectName(QString::fromUtf8("speedBtn"));
        speedBtn->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(speedBtn, 0, 3, 1, 1);

        widget = new QWidget(CtrlBar);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 594, 25));
        widget->setMinimumSize(QSize(0, 25));
        playSlider = new QSlider(widget);
        playSlider->setObjectName(QString::fromUtf8("playSlider"));
        playSlider->setGeometry(QRect(3, 1, 483, 22));
        playSlider->setMinimumSize(QSize(0, 22));
        playSlider->setOrientation(Qt::Horizontal);
        widget_2 = new QWidget(CtrlBar);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(486, 0, 108, 25));
        horizontalSlider_2 = new QSlider(widget_2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(24, 0, 80, 25));
        horizontalSlider_2->setMinimumSize(QSize(80, 25));
        horizontalSlider_2->setMaximumSize(QSize(80, 25));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        volumeBtn = new QPushButton(widget_2);
        volumeBtn->setObjectName(QString::fromUtf8("volumeBtn"));
        volumeBtn->setGeometry(QRect(2, 2, 20, 20));

        retranslateUi(CtrlBar);

        QMetaObject::connectSlotsByName(CtrlBar);
    } // setupUi

    void retranslateUi(QWidget *CtrlBar)
    {
        CtrlBar->setWindowTitle(QCoreApplication::translate("CtrlBar", "Form", nullptr));
        stopBtn->setText(QCoreApplication::translate("CtrlBar", "PushButton", nullptr));
        forwardBtn->setText(QCoreApplication::translate("CtrlBar", "PushButton", nullptr));
        settingBtn->setText(QCoreApplication::translate("CtrlBar", "PushButton", nullptr));
        playOrPause->setText(QCoreApplication::translate("CtrlBar", "PushButton", nullptr));
        playListBtn->setText(QCoreApplication::translate("CtrlBar", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("CtrlBar", "/", nullptr));
        BackwardBtn->setText(QCoreApplication::translate("CtrlBar", "PushButton", nullptr));
        speedBtn->setText(QCoreApplication::translate("CtrlBar", "PushButton", nullptr));
        volumeBtn->setText(QCoreApplication::translate("CtrlBar", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CtrlBar: public Ui_CtrlBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLBAR_H
