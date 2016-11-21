#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QWidget>
#include <QObject>
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
gboard = new board (this);
gboard ->show();
gboard -> start();
}

void MainWindow::globalboard(board *b){
    gboard = b;
}
