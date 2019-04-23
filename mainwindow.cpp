#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QString>
#include <QStringList>
#include <QFileDialog>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->process = new QProcess(this);
    connect( process, SIGNAL(readyReadStandardOutput()), SLOT(onStdoutAvailable()) );
    connect( process, SIGNAL(finished(int,QProcess::ExitStatus)), SLOT(onFinished()) );


       timer = new QTimer(this);
       connect(timer, SIGNAL(timeout()), this, SLOT(Update()));
       timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


    QString file = "Engine/BodyScanDemo.exe";

    QStringList arguments;

    QFileDialog load(this);

    if(load.exec())
    {


    if(process->isOpen())
       process->close();

    QStringList model_path = load.selectedFiles();
    arguments.push_back(model_path.at(0));
    arguments.push_back("0");
    process->start(file,arguments,QIODevice::ReadWrite | QIODevice::Text);
    }


}

void MainWindow::onFinished()
{



}


void MainWindow::Update()
{

    char data[1];
    data[0] = '<';
process->write(data);

}

void MainWindow::onStdoutAvailable()
{

    QStringList measures;
    QStringList actual_measures;

    result = process->readAll();
    measures = result.split('*');

   for(int i = 0; i < measures.count();i++)
   {
       QString current_string;
       current_string = measures.at(i);

       if(current_string.startsWith('M'))
       {
       QStringList measure_data = current_string.split(' ');

       actual_measures.push_back(measure_data.at(1));
       }

       if(current_string.startsWith("MU"))
       {
       QStringList measure_data = current_string.split(' ');

       ui->manualListBox->addItem(measure_data.at(1));
       }



   }

   result = " ";

   if(actual_measures.count() > 9)
  {
      ui->height_label_value->setText(actual_measures.at(0) + " m");
      ui->head_label_value->setText(actual_measures.at(1) + " m");
      ui->neck_label_value->setText(actual_measures.at(2) + " m");
      ui->shoulders_label_value->setText(actual_measures.at(3) + " m");
      ui->chest_label_value->setText(actual_measures.at(4) + " m");
      ui->waist_label_value->setText(actual_measures.at(5) + " m");
      ui->hips_label_value->setText(actual_measures.at(6) + " m");
      ui->buttocks_label_value->setText(actual_measures.at(9) + " m");
      ui->thigh_label_value->setText(actual_measures.at(7) + " m");
      ui->calf_label_value->setText(actual_measures.at(8) + " m");
  }



}






void MainWindow::on_pushButton_2_clicked()
{


    char data[1];
    data[0] = 'z';
    process->write(data);

}
