#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    void closeApp();
    void speak();
    ~MainWindow();

private:



};

#endif // MAINWINDOW_H
