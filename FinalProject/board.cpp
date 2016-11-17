#include "board.h"
#include "ui_board.h"
#include<QGraphicsScene>
#include <QGraphicsRectItem>

board::board(QWidget *parent)
{
    ui->setupUi(this);
}

void board::start(){
    scene = new QGraphicsScene();
    scene -> setSceneRect(0,0,725,500);

}

board::~board()
{
    delete ui;
}
