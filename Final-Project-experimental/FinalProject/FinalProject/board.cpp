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

   /* to create a top bar */
   //QVBoxLayout * layout = new QVBoxLayout;
   //top = new QWidget;

   //GraphicsScene = new QGraphicsScene(this);

   setFixedSize(700,700);

   //frames= 45;//frames per second

   //GraphicsScene -> setSceneRect(0,0,725,500);

    //set position
    //bloon = new balloon();


   //bground = QImage (":/images/Dartboard.png");


   QVBoxLayout * overall_layout = new QVBoxLayout;
   this -> setLayout(overall_layout);

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



}


board::~board()
{
    delete ui;
}
