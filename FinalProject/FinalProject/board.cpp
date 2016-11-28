#include <QPixmap>
#include <QObject>
#include "board.h"
#include "ui_board.h"
#include<QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QImage>
#include "qpixmap.h"
#include <QGraphicsPixmapItem>
#include <QVBoxLayout>
#include <QHBoxLayout>

board::board(QWidget *parent): ui(new Ui::board)
{
   ui ->setupUi(this);
   //QPixmap * mypix = new Qpixmap (":/image/Dartboard.png")
   //ui->label->setPixmap(mypix);
   //delete mypix;

   /* to create a top bar */
   //QVBoxLayout * layout = new QVBoxLayout;
   //top = new QWidget;

   Board = new QWidget;
   Board -> setFixedSize(700,700);

  //set position
   x_balloon =  200;
   y_balloon = 200;

   bground = new QPixmap (":/images/Dartboard.png");

}


//board::board(QWidget *parent){}

//start function
/*
 void board::start(){
    GraphicsScene = new QGraphicsScene();
    GraphicsScene -> setSceneRect(0,0,725,500);

   bloon = new balloon();
}
*/

board::~board()
{
    delete ui;
}
