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
#include <QPushButton>
#include <QKeyEvent>
#include <QTimer>
#include <iostream>

board::board(QWidget *parent)
{

   /* to create a top bar */
   //QVBoxLayout * layout = new QVBoxLayout;
   //top = new QWidget;

   GraphicsScene = new QGraphicsScene(this);
   GraphicsScene -> setSceneRect(0,0,725,500);
   setBackgroundBrush(QBrush());
   setScene(GraphicsScene);

   setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

  //code from different approach to creating the balloon without a seperate class
  /*
   //gameover = false;
   //frames= 45;//frames per second


    //set position
    //bloon = new balloon();
   //bground = QImage (":/images/Dartboard.png");

   //QVBoxLayout * overall_layout = new QVBoxLayout;
   //this -> setLayout(overall_layout);

   //balloon image
   QString filename(":/images/balloon.png");
   balloon_image = new QPixmap (filename);

   //creating the board
   Board = new QWidget;
   Board-> setFixedSize(600,600);
   Board -> setContentsMargins(10,10,10,10);
   QGridLayout * Square = new QGridLayout(Board);
   overall_layout -> addWidget(Board,0,Qt::AlignCenter);
   this-> setLayout(overall_layout);
   Square->setGeometry(QRect());
   Square -> setSpacing(0);

   //initialize balloon
   balloon_posit = new QPoint (10, 200);

  */

   bloon = new balloon();
   bloon->setPos(20,250);
   bloon-> setFlag (QGraphicsItem::ItemIsFocusable);
   bloon->setFocus();
   GraphicsScene -> addItem(bloon);

   QGraphicsView* view = new QGraphicsView(GraphicsScene);
   show();

}


board::~board()
{
    //delete ui;
    delete GraphicsScene;
}

/*
void board:: keyPressEvent(QKeyEvent *kevent){
    if(gameover = false){
        int y_balloon = balloon_posit ->  ry();
        if (kevent ->key() == Qt::Key_Up){

        }
    }
}
*/
