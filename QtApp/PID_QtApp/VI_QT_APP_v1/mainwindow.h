#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void receiveMessage();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_horizontalSlider_sliderMoved(int position);


    void on_horizontalSlider_valueChanged(int value);
//    void setupPlot();
//    void realtimeDataSlot();

private:
    Ui::MainWindow *ui;
    QSerialPort serialPort;
    QSerialPortInfo info;
    QString buffer;
    QString code;
    char outputs;
    int codeSize;
    float A0;
    float A1;
    QStringList analog;
    quint8 duty;
    char pwm_duty = 0;
};
#endif // MAINWINDOW_H
