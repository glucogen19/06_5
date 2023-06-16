#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "tbook.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel *authorLabel;
    QLabel *nameLabel;
    QLabel *countLabel;
    TBook tbook;
};

#endif // MAINWINDOW_H
