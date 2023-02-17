#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"

QTimer dataTimer;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

//void MainWindow::setupPlot()
//{
//    ui->customPlot->addGraph(); // blue line
//    ui->customPlot->graph(0)->setPen(QPen(QColor(40, 110, 255)));
//    ui->customPlot->addGraph(); // red line
//    ui->customPlot->graph(1)->setPen(QPen(QColor(255, 110, 40)));

//    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
//    timeTicker->setTimeFormat("%h:%m:%s");
//    ui->customPlot->xAxis->setTicker(timeTicker);
//    ui->customPlot->axisRect()->setupFullAxesBox();
//    ui->customPlot->yAxis->setRange(-1.2, 1.2);

//    // make left and bottom axes transfer their ranges to right and top axes:
//    connect(ui->customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->customPlot->xAxis2, SLOT(setRange(QCPRange)));
//    connect(ui->customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->customPlot->yAxis2, SLOT(setRange(QCPRange)));

//    // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
//    connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
//    dataTimer.start(0); // Interval 0 means to refresh as fast as possible
//}

//void MainWindow::realtimeDataSlot()
//{
//    static QTime time(QTime::currentTime());
//    // calculate two new data points:
//    double key = time.elapsed()/1000.0; // time elapsed since start of demo, in seconds
//    static double lastPointKey = 0;
//    if (key-lastPointKey > 0.002) // at most add point every 2 ms
//    {
//      // add data to lines:
//      ui->customPlot->graph(0)->addData(key, qSin(key)+qrand()/(double)RAND_MAX*1*qSin(key/0.3843));
//      ui->customPlot->graph(1)->addData(key, qCos(key)+qrand()/(double)RAND_MAX*0.5*qSin(key/0.4364));
//      // rescale value (vertical) axis to fit the current data:
//      //ui->customPlot->graph(0)->rescaleValueAxis();
//      //ui->customPlot->graph(1)->rescaleValueAxis(true);
//      lastPointKey = key;
//    }
//    // make key axis range scroll with the data (at a constant range size of 8):
//    ui->customPlot->xAxis->setRange(key, 8, Qt::AlignRight);
//    ui->customPlot->replot();

//    // calculate frames per second:
//    static double lastFpsKey;
//    static int frameCount;
//    ++frameCount;
//    if (key-lastFpsKey > 2) // average fps over 2 seconds
//    {
//      ui->statusbar->showMessage(
//            QString("%1 FPS, Total Data points: %2")
//            .arg(frameCount/(key-lastFpsKey), 0, 'f', 0)
//            .arg(ui->customPlot->graph(0)->data()->size()+ui->customPlot->graph(1)->data()->size())
//            , 0);
//      lastFpsKey = key;
//      frameCount = 0;
//    }
//}
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
        serialPort.write(&pwm_duty,1);
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



void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->lcd1->display(value);
    duty = value;
    pwm_duty = (char)duty;
}

