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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCOM5;
    QAction *actionCOM1;
    QAction *action9600;
    QAction *action115200;
    QAction *action1;
    QAction *actionNo_StopBit;
    QAction *actionNo;
    QAction *actionYes;
    QAction *actionNo_2;
    QAction *actionCR_LR;
    QAction *actionCLE;
    QAction *actionLR;
    QAction *actionCR;
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
    QFrame *frame_5;
    QLabel *label_13;
    QFrame *frame_6;
    QListWidget *listWidget_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QFrame *frame_3;
    QLabel *label_14;
    QFrame *frame_4;
    QListWidget *listWidget_3;
    QFrame *frame_7;
    QFrame *frame_8;
    QFrame *frame_2;
    QLabel *label_15;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_10;
    QLCDNumber *adc2;
    QLabel *label_16;
    QLCDNumber *adc3;
    QLCDNumber *adc1;
    QLabel *label_9;
    QLCDNumber *adc0;
    QLabel *label_19;
    QFrame *frame;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(581, 355);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(800, 551));
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionCOM5 = new QAction(MainWindow);
        actionCOM5->setObjectName(QString::fromUtf8("actionCOM5"));
        actionCOM1 = new QAction(MainWindow);
        actionCOM1->setObjectName(QString::fromUtf8("actionCOM1"));
        action9600 = new QAction(MainWindow);
        action9600->setObjectName(QString::fromUtf8("action9600"));
        action115200 = new QAction(MainWindow);
        action115200->setObjectName(QString::fromUtf8("action115200"));
        action1 = new QAction(MainWindow);
        action1->setObjectName(QString::fromUtf8("action1"));
        actionNo_StopBit = new QAction(MainWindow);
        actionNo_StopBit->setObjectName(QString::fromUtf8("actionNo_StopBit"));
        actionNo = new QAction(MainWindow);
        actionNo->setObjectName(QString::fromUtf8("actionNo"));
        actionYes = new QAction(MainWindow);
        actionYes->setObjectName(QString::fromUtf8("actionYes"));
        actionNo_2 = new QAction(MainWindow);
        actionNo_2->setObjectName(QString::fromUtf8("actionNo_2"));
        actionCR_LR = new QAction(MainWindow);
        actionCR_LR->setObjectName(QString::fromUtf8("actionCR_LR"));
        actionCLE = new QAction(MainWindow);
        actionCLE->setObjectName(QString::fromUtf8("actionCLE"));
        actionLR = new QAction(MainWindow);
        actionLR->setObjectName(QString::fromUtf8("actionLR"));
        actionCR = new QAction(MainWindow);
        actionCR->setObjectName(QString::fromUtf8("actionCR"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 801, 551));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(801, 551));
        tabWidget->setMaximumSize(QSize(801, 551));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 260, 75, 21));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(300, 260, 151, 21));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(310, 60, 231, 161));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 30, 91, 16));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 31, 101, 21));
        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(122, 60, 101, 22));
        comboBox_3 = new QComboBox(tab);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(120, 90, 101, 21));
        comboBox_4 = new QComboBox(tab);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(120, 120, 101, 22));
        comboBox_5 = new QComboBox(tab);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(120, 150, 101, 22));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 30, 49, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 71, 21));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 90, 71, 21));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 120, 51, 21));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 150, 81, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 180, 81, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_6 = new QComboBox(tab);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(120, 180, 101, 22));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 260, 75, 21));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 260, 75, 21));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 260, 75, 21));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 220, 61, 21));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 220, 81, 20));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(470, 30, 75, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        frame_5 = new QFrame(tab_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(390, 50, 151, 211));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(frame_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 0, 101, 16));
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(10, 20, 131, 181));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Sunken);
        listWidget_2 = new QListWidget(frame_6);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/led_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Icons/led_on.png"), QSize(), QIcon::Normal, QIcon::On);
        QFont font;
        font.setPointSize(9);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem1->setFont(font);
        __qlistwidgetitem1->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem2->setFont(font);
        __qlistwidgetitem2->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem3->setFont(font);
        __qlistwidgetitem3->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem4->setFont(font);
        __qlistwidgetitem4->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem5->setFont(font);
        __qlistwidgetitem5->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem6->setFont(font);
        __qlistwidgetitem6->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem7->setFont(font);
        __qlistwidgetitem7->setIcon(icon);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(70, 10, 51, 161));
        listWidget_2->setFrameShape(QFrame::NoFrame);
        listWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_2->setSelectionMode(QAbstractItemView::NoSelection);
        pushButton_7 = new QPushButton(frame_6);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 29, 51, 21));
        pushButton_8 = new QPushButton(frame_6);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 50, 51, 20));
        pushButton_10 = new QPushButton(frame_6);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 90, 51, 20));
        pushButton_11 = new QPushButton(frame_6);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 110, 51, 20));
        pushButton_12 = new QPushButton(frame_6);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 130, 51, 20));
        pushButton_13 = new QPushButton(frame_6);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 150, 51, 20));
        pushButton_6 = new QPushButton(frame_6);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 10, 51, 20));
        pushButton_9 = new QPushButton(frame_6);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 70, 51, 20));
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(60, 50, 111, 211));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 0, 81, 16));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 20, 91, 181));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Sunken);
        listWidget_3 = new QListWidget(frame_4);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem8->setFont(font);
        __qlistwidgetitem8->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem9->setFont(font);
        __qlistwidgetitem9->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem10->setFont(font);
        __qlistwidgetitem10->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem11->setFont(font);
        __qlistwidgetitem11->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem12->setFont(font);
        __qlistwidgetitem12->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem13->setFont(font);
        __qlistwidgetitem13->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem14->setFont(font);
        __qlistwidgetitem14->setIcon(icon);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem15->setFont(font);
        __qlistwidgetitem15->setBackground(brush);
        __qlistwidgetitem15->setIcon(icon);
        __qlistwidgetitem15->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(20, 10, 51, 161));
        listWidget_3->setFrameShape(QFrame::NoFrame);
        listWidget_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_3->setSelectionMode(QAbstractItemView::NoSelection);
        frame_7 = new QFrame(tab_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(40, 30, 321, 241));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Sunken);
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(140, 20, 161, 201));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame_8);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 20, 161, 181));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(130, 10, 31, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        label_15->setFont(font1);
        label_15->setScaledContents(false);
        label_15->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(130, 130, 31, 31));
        label_18->setFont(font1);
        label_18->setScaledContents(false);
        label_18->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(130, 90, 31, 31));
        label_17->setFont(font1);
        label_17->setScaledContents(false);
        label_17->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 90, 31, 31));
        label_11->setFont(font1);
        label_11->setScaledContents(false);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 130, 31, 31));
        label_12->setFont(font1);
        label_12->setScaledContents(false);
        label_12->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 50, 31, 31));
        label_10->setFont(font1);
        label_10->setScaledContents(false);
        label_10->setAlignment(Qt::AlignCenter);
        adc2 = new QLCDNumber(frame_2);
        adc2->setObjectName(QString::fromUtf8("adc2"));
        adc2->setGeometry(QRect(50, 90, 81, 31));
        adc2->setFrameShape(QFrame::StyledPanel);
        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(130, 50, 31, 31));
        label_16->setFont(font1);
        label_16->setScaledContents(false);
        label_16->setAlignment(Qt::AlignCenter);
        adc3 = new QLCDNumber(frame_2);
        adc3->setObjectName(QString::fromUtf8("adc3"));
        adc3->setGeometry(QRect(50, 130, 81, 31));
        adc3->setFrameShape(QFrame::StyledPanel);
        adc1 = new QLCDNumber(frame_2);
        adc1->setObjectName(QString::fromUtf8("adc1"));
        adc1->setGeometry(QRect(50, 50, 81, 31));
        adc1->setFrameShape(QFrame::StyledPanel);
        adc1->setLineWidth(2);
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 31, 31));
        label_9->setFont(font1);
        label_9->setScaledContents(false);
        label_9->setAlignment(Qt::AlignCenter);
        adc0 = new QLCDNumber(frame_2);
        adc0->setObjectName(QString::fromUtf8("adc0"));
        adc0->setGeometry(QRect(50, 10, 81, 31));
        QFont font2;
        font2.setBold(false);
        adc0->setFont(font2);
        adc0->setFrameShape(QFrame::StyledPanel);
        adc0->setSmallDecimalPoint(false);
        label_19 = new QLabel(frame_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, 0, 81, 16));
        frame = new QFrame(tab_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(380, 30, 171, 241));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(1);
        tabWidget->addTab(tab_2, QString());
        frame->raise();
        frame_7->raise();
        frame_5->raise();
        frame_3->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 581, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Virtual Instrument v2 - UTN FRC", nullptr));
        actionCOM5->setText(QCoreApplication::translate("MainWindow", "COM5", nullptr));
        actionCOM1->setText(QCoreApplication::translate("MainWindow", "COM1", nullptr));
        action9600->setText(QCoreApplication::translate("MainWindow", "9600", nullptr));
        action115200->setText(QCoreApplication::translate("MainWindow", "115200", nullptr));
        action1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        actionNo_StopBit->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        actionNo->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        actionYes->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        actionNo_2->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        actionCR_LR->setText(QCoreApplication::translate("MainWindow", "CR\\LR", nullptr));
        actionCLE->setText(QCoreApplication::translate("MainWindow", "CLE", nullptr));
        actionLR->setText(QCoreApplication::translate("MainWindow", "LR", nullptr));
        actionCR->setText(QCoreApplication::translate("MainWindow", "CR", nullptr));
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
        label_13->setText(QCoreApplication::translate("MainWindow", "Digital Outputs", nullptr));

        const bool __sortingEnabled = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_2->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Y0", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_2->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Y1", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_2->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Y2", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_2->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Y3", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Y4", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_2->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Y5", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_2->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "Y6", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_2->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainWindow", "Y7", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled);

        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Toggle", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Toggle", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Toggle", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Toggle", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Toggle", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Toggle", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Toggle", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Toggle", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Digital Inputs", nullptr));

        const bool __sortingEnabled1 = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem8 = listWidget_3->item(0);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("MainWindow", "X0", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_3->item(1);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("MainWindow", "X1", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_3->item(2);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("MainWindow", "X2", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_3->item(3);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("MainWindow", "X3", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget_3->item(4);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("MainWindow", "X4", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_3->item(5);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("MainWindow", "X5", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget_3->item(6);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("MainWindow", "X6", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = listWidget_3->item(7);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("MainWindow", "X7", nullptr));
        listWidget_3->setSortingEnabled(__sortingEnabled1);

        label_15->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "A2", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "A3", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "A1", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "A0", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Analog Inputs", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
