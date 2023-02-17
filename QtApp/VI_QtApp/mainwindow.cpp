#include "mainwindow.h"
#include "ui_mainwindow.h"

int y_0 = 0;
int y_1 = 0;
int y_2 = 0;
int y_3 = 0;
int y_4 = 0;
int y_5 = 0;
int y_6 = 0;
int y_7 = 0;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testfloat = 16.248998;
    //ui->test->display(testfloat);
    QList<QSerialPortInfo> ports = info.availablePorts();
    QList<QString> stringPorts;
    for(int i = 0 ; i < ports.size() ; i++){
        stringPorts.append(ports.at(i).portName());
    }
    ui->comboBox->addItems(stringPorts);

    // Baud Rate Ratios
    //QList<qint32> baudRates = info.standardBaudRates(); // What baudrates does my computer support ?
    QList<QString> stringBaudRates;
    /*
    for(int i = 0 ; i < baudRates.size() ; i++){
        stringBaudRates.append(QString::number(baudRates.at(i)));
    }
    */
    stringBaudRates.append(QString::number(115200));
    stringBaudRates.append(QString::number(9600));
    ui->comboBox_2->addItems(stringBaudRates);

    // Data Bits
    ui->comboBox_3->addItem("8");
    ui->comboBox_3->addItem("5");
    ui->comboBox_3->addItem("6");
    ui->comboBox_3->addItem("7");


    // Stop Bits
    ui->comboBox_4->addItem("1 Bit");
    ui->comboBox_4->addItem("1,5 Bits");
    ui->comboBox_4->addItem("2 Bits");

    // Parities
    ui->comboBox_5->addItem("No Parity");
    ui->comboBox_5->addItem("Even Parity");
    ui->comboBox_5->addItem("Odd Parity");
    ui->comboBox_5->addItem("Mark Parity");
    ui->comboBox_5->addItem("Space Parity");

    //Flow Controls
    ui->comboBox_6->addItem("No Flow Control");
    ui->comboBox_6->addItem("Hardware Flow Control");
    ui->comboBox_6->addItem("Software Flow Control");
}

MainWindow::~MainWindow()
{
    serialPort.close();
    delete ui;
}


void MainWindow::receiveMessage()
{
    QByteArray dataBA = serialPort.readAll();
    QString data(dataBA);
    buffer.append(data);
    if(buffer.endsWith("\n") == true){
        buffer.remove('\n');
        buffer.append(QLatin1Char(','));
        analog = buffer.split(QLatin1Char(','));

        A0 = analog.at(0).toFloat()*(10.00/3770.00);
        A1 = analog.at(1).toFloat()*(10.00/3770.00);

        ui->adc0->display(analog.at(0));
        ui->adc1->display(analog.at(1));

        buffer="";
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString message = ui->lineEdit_2->text();
    ui->textBrowser->setTextColor(Qt::darkGreen); // Color of message to send is green.
    ui->textBrowser->append(message);
    serialPort.write(message.toUtf8());
}

void MainWindow::on_pushButton_2_clicked()
{

    QString portName = ui->comboBox->currentText();
    serialPort.setPortName(portName);

    serialPort.open(QIODevice::ReadWrite);

    if(!serialPort.isOpen()){
        ui->textBrowser->setTextColor(Qt::red);
        ui->textBrowser->append("!!!! Something went Wrong !!!!");
    }
    else {

        QString stringbaudRate = ui->comboBox_2->currentText();
        int intbaudRate = stringbaudRate.toInt();
        serialPort.setBaudRate(intbaudRate);

        QString dataBits = ui->comboBox_3->currentText();
        if(dataBits == "5 Bits") {
           serialPort.setDataBits(QSerialPort::Data5);
        }
        else if((dataBits == "6 Bits")) {
           serialPort.setDataBits(QSerialPort::Data6);
        }
        else if(dataBits == "7 Bits") {
           serialPort.setDataBits(QSerialPort::Data7);
        }
        else if(dataBits == "8 Bits"){
           serialPort.setDataBits(QSerialPort::Data8);
        }

        QString stopBits = ui->comboBox_4->currentText();
        if(stopBits == "1 Bit") {
         serialPort.setStopBits(QSerialPort::OneStop);
        }
        else if(stopBits == "1,5 Bits") {
         serialPort.setStopBits(QSerialPort::OneAndHalfStop);
        }
        else if(stopBits == "2 Bits") {
         serialPort.setStopBits(QSerialPort::TwoStop);
        }

        QString parity = ui->comboBox_5->currentText();
        if(parity == "No Parity"){
          serialPort.setParity(QSerialPort::NoParity);
        }
        else if(parity == "Even Parity"){
          serialPort.setParity(QSerialPort::EvenParity);
        }
        else if(parity == "Odd Parity"){
          serialPort.setParity(QSerialPort::OddParity);
        }
        else if(parity == "Mark Parity"){
          serialPort.setParity(QSerialPort::MarkParity);
        }
        else if(parity == "Space Parity") {
            serialPort.setParity(QSerialPort::SpaceParity);
        }


        QString flowControl = ui->comboBox_6->currentText();
        if(flowControl == "No Flow Control") {
          serialPort.setFlowControl(QSerialPort::NoFlowControl);
        }
        else if(flowControl == "Hardware Flow Control") {
          serialPort.setFlowControl(QSerialPort::HardwareControl);
        }
        else if(flowControl == "Software Flow Control") {
          serialPort.setFlowControl(QSerialPort::SoftwareControl);
        }

        code = ui->lineEdit->text();
        codeSize = code.size();

        connect(&serialPort,SIGNAL(readyRead()),this,SLOT(receiveMessage()));
    }


}
void MainWindow::on_pushButton_3_clicked()
{
    serialPort.close();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->comboBox->clear();
    QList<QSerialPortInfo> ports = info.availablePorts();
    QList<QString> stringPorts;
    for(int i = 0 ; i < ports.size() ; i++){
        stringPorts.append(ports.at(i).portName());
    }
    ui->comboBox->addItems(stringPorts);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->textBrowser->clear();
}

void MainWindow::on_pushButton_6_clicked()
{
    switch(y_0){
        case 0: ui->listWidget_2->item(0)->setIcon(QIcon(":/Icons/led_on.png"));
                serialPort.write("B");
                y_0 = 1; break;
        case 1: ui->listWidget_2->item(0)->setIcon(QIcon(":/Icons/led_off.png"));
                serialPort.write("b");
                y_0 = 0; break;
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    switch(y_1){
        case 0: ui->listWidget_2->item(1)->setIcon(QIcon(":/Icons/led_on.png"));
                serialPort.write("A");
                y_1 = 1; break;
        case 1: ui->listWidget_2->item(1)->setIcon(QIcon(":/Icons/led_off.png"));
                serialPort.write("a");
                y_1 = 0; break;
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    switch(y_2){
        case 0: ui->listWidget_2->item(2)->setIcon(QIcon(":/Icons/led_on.png"));
                serialPort.write("C");
                y_2 = 1; break;
        case 1: ui->listWidget_2->item(2)->setIcon(QIcon(":/Icons/led_off.png"));
                serialPort.write("c");
                y_2 = 0; break;
    }
}
void MainWindow::on_pushButton_9_clicked()
{
    switch(y_3){
        case 0: ui->listWidget_2->item(3)->setIcon(QIcon(":/Icons/led_on.png"));
                serialPort.write("D");
                y_3 = 1; break;
        case 1: ui->listWidget_2->item(3)->setIcon(QIcon(":/Icons/led_off.png"));
                serialPort.write("d");
                y_3 = 0; break;
    }
}
void MainWindow::on_pushButton_10_clicked()
{
    switch(y_4){
        case 0: ui->listWidget_2->item(4)->setIcon(QIcon(":/Icons/led_on.png"));
                serialPort.write("E");
                y_4 = 1; break;
        case 1: ui->listWidget_2->item(4)->setIcon(QIcon(":/Icons/led_off.png"));
                serialPort.write("e");
                y_4 = 0; break;
    }
}
void MainWindow::on_pushButton_11_clicked()
{
    switch(y_5){
        case 0: ui->listWidget_2->item(5)->setIcon(QIcon(":/Icons/led_on.png"));
                serialPort.write("F");
                y_5 = 1; break;
        case 1: ui->listWidget_2->item(5)->setIcon(QIcon(":/Icons/led_off.png"));
                serialPort.write("f");
                y_5 = 0; break;
    }
}
void MainWindow::on_pushButton_12_clicked()
{
    switch(y_6){
        case 0: ui->listWidget_2->item(6)->setIcon(QIcon(":/Icons/led_on.png"));
                serialPort.write("G");
                y_6 = 1; break;
        case 1: ui->listWidget_2->item(6)->setIcon(QIcon(":/Icons/led_off.png"));
                serialPort.write("g");
                y_6 = 0; break;
    }
}
void MainWindow::on_pushButton_13_clicked()
{
    switch(y_7){
        case 0: ui->listWidget_2->item(7)->setIcon(QIcon(":/Icons/led_on.png"));
                serialPort.write("H");
                y_7 = 1; break;
        case 1: ui->listWidget_2->item(7)->setIcon(QIcon(":/Icons/led_off.png"));
                serialPort.write("h");
                y_7 = 0; break;
    }
}



