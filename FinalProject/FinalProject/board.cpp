#include <QPixmap>
#include <QObject>
#include "board.h"
#include "ui_board.h"
#include<QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <balloon.h>
#include <QImage>
#include "qpixmap.h"
#include <QGraphicsPixmapItem>

board::board(QWidget *parent): ui(new Ui::board)
{
   ui ->setupUi(this);
   QPixmap * mypix = new Qpixmap (":/image/Dartboard.png")
   ui->label->setPixmap(mypix);
   delete mypix;
}


//board::board(QWidget *parent){}

void board::start(){
    GraphicsScene = new QGraphicsScene();
    GraphicsScene -> setSceneRect(0,0,725,500);

   bloon = new balloon();
}

board::~board()
{
    delete ui;
}
