/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QLabel *label;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QLCDNumber *adc0;
    QLabel *label_10;
    QLCDNumber *adc1;
    QLabel *label_9;
    QSlider *horizontalSlider;
    QLCDNumber *lcd1;
    QCustomPlot *customPlot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(801, 441);
        MainWindow->setMinimumSize(QSize(801, 441));
        MainWindow->setMaximumSize(QSize(801, 441));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 801, 441));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(801, 441));
        tabWidget->setMaximumSize(QSize(801, 441));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 300, 75, 21));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(400, 300, 151, 21));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(410, 100, 231, 161));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 70, 91, 16));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(220, 71, 101, 21));
        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(222, 100, 101, 22));
        comboBox_3 = new QComboBox(tab);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(220, 130, 101, 21));
        comboBox_4 = new QComboBox(tab);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(220, 160, 101, 22));
        comboBox_5 = new QComboBox(tab);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(220, 190, 101, 22));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 70, 49, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 100, 71, 21));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 130, 71, 21));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 160, 51, 21));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 190, 81, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(120, 220, 81, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_6 = new QComboBox(tab);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(220, 220, 101, 22));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 300, 75, 21));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 300, 75, 21));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 300, 75, 21));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 260, 61, 21));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 260, 81, 20));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 70, 75, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        adc0 = new QLCDNumber(tab_2);
        adc0->setObjectName(QString::fromUtf8("adc0"));
        adc0->setGeometry(QRect(640, 30, 101, 31));
        QFont font;
        font.setBold(false);
        adc0->setFont(font);
        adc0->setFrameShape(QFrame::StyledPanel);
        adc0->setSmallDecimalPoint(false);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(600, 70, 31, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        label_10->setFont(font1);
        label_10->setScaledContents(false);
        label_10->setAlignment(Qt::AlignCenter);
        adc1 = new QLCDNumber(tab_2);
        adc1->setObjectName(QString::fromUtf8("adc1"));
        adc1->setGeometry(QRect(640, 70, 101, 31));
        adc1->setFrameShape(QFrame::StyledPanel);
        adc1->setLineWidth(1);
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(600, 30, 31, 31));
        label_9->setFont(font1);
        label_9->setScaledContents(false);
        label_9->setAlignment(Qt::AlignCenter);
        horizontalSlider = new QSlider(tab_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(620, 230, 131, 22));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);
        lcd1 = new QLCDNumber(tab_2);
        lcd1->setObjectName(QString::fromUtf8("lcd1"));
        lcd1->setGeometry(QRect(660, 190, 64, 23));
        customPlot = new QCustomPlot(tab_2);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(30, 20, 521, 361));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 801, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Data Received", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Data Bits", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Stop Bits", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Flow Control", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Code", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Config", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "A1", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "A0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
