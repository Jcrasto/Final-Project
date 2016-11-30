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

//causing program to fail to compile
void MainWindow::on_pushButton_clicked()
{
    gboard = new board (this);
    this-> setCentralWidget(gboard);

    gboard ->show();
    //gboard -> start();

}

void MainWindow::game_over(){
    QWidget* central = this -> centralWidget();
    central -> setParent(nullptr);
    ui ->setupUi(this);
    this -> setFixedSize(700,700);
}


