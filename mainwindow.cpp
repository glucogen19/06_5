#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(360,120);
    authorLabel = new QLabel(this);
    authorLabel->setFont(QFont("Times New Roman",16,QFont::Bold));
    authorLabel->setGeometry(0, 0, 400, 30);

    nameLabel = new QLabel(this);
    nameLabel->setFont(QFont("Times New Roman",16,QFont::Bold));
    nameLabel->setGeometry(0, 30, 400, 30);

    countLabel = new QLabel(this);
    countLabel->setFont(QFont("Times New Roman",16,QFont::Bold));
    countLabel->setGeometry(0, 60, 400, 30);

    authorLabel->setText("Author: " + tbook.getAuthor());
    nameLabel->setText("Name: " + tbook.getName());
    countLabel->setText("Count: " + QString::number(tbook.getCount()));
}

MainWindow::~MainWindow()
{
}
