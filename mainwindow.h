#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QString>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QProcess * process;
    QString  result;
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *timer;

private slots:    

    void on_pushButton_2_clicked();
    void onStdoutAvailable();
    void on_pushButton_clicked();
    void onFinished();
    void Update();
};

#endif // MAINWINDOW_H
