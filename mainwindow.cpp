#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QWidget>

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

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Two Player Mode is not available");
}

void MainWindow::on_pushButton_clicked()
{
board = new gameboard (this);
board -> show();
}
