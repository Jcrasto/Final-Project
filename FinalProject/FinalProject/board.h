#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsView>
#include <QObject>
//#include "mainwindow.h"
#include <QMainWindow>
#include <iostream>
#include <QTimer>
#include <QtGlobal>
#include "balloon.h"
#include <QLabel>
#include <QKeyEvent>
#include <QGraphicsPixmapItem>
#include <QPixmap>

//extern class MainWindow;

/*
namespace Ui {
class board;
}
*/

class board : public QGraphicsView
{
    //Q_OBJECT

 public slots:
   // void start();

public:
    explicit board(QWidget *parent = 0);
    virtual~board();

    //Public Variables
    QGraphicsScene *GraphicsScene;
    
    void game_over(); 

   // void keyPressEvent(QKeyEvent* kevent);
    //void paintEvent(QPaintEvent * pevent);
    //void showEvent (QShowEvent * sevent);

    balloon* bloon;

    int interval;

private:
   //Ui::board *ui;

    //QTimer timer;
    //+ QWidget * Board;

};

#endif // BOARD_H
