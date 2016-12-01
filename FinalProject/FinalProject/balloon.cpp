#include "balloon.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include "mainwindow.h"
#include "board.h"
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <fstream>

//extern board * gboard;

balloon::balloon(QGraphicsItem *parent): QGraphicsPixmapItem (parent)
{
    //balloon image
    QString filename("C:/JoshCrasto/nov28commit/Final-Project-experimental/FinalProject/FinalProject/balloon.png");
    std::ifstream fin ("C:/JoshCrasto/nov28commit/Final-Project-experimental/FinalProject/FinalProject/balloon.png");
    if (!fin){
        std::cout<<"error opening file"<<std::endl;
    }
    balloon_image = new QPixmap (filename);
    setPixmap(*balloon_image);
}

balloon::~balloon(){

}

void balloon:: keyPressEvent(QKeyEvent *event){
    if (event ->key() == Qt::Key_Up){
        if(pos().y() >  40 ){
            setPos(x(),y()-20);
        }
    }else if (event->key()==Qt::Key_Down){
        if(pos().y()< 480){
            setPos(x(), y()+20);
        }
    }
}
