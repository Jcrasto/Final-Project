#include "board.h"
#include "ui_board.h"
#include<QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <balloon.h>
#include <QImage>

board::board(QWidget *parent)
{}

void board::start(){
    GraphicsScene = new QGraphicsScene();
    GraphicsScene -> setSceneRect(0,0,725,500);

   bloon = new balloon();
}

board::~board()
{
    delete ui;
}
