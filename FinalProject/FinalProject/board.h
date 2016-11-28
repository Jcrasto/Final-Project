#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsView>
#include <QObject>
#include "mainwindow.h"
#include <QMainWindow>
#include <iostream>



namespace Ui {
class board;
}

class board : public QGraphicsView
{
    Q_OBJECT

 public slots:
   // void start();

public:
    board(QWidget *parent = 0);
    virtual~board();

    //Public Variables
    QGraphicsScene *GraphicsScene;

private:
    Ui::board *ui;

    //baloon position and size
    double x_balloon, y_balloon;
    const double balloon_width = 20.0;
    const double balloon_height = 20.0;

    QPixmap * bground;
    QPixmap * balloon_image;

    QWidget * Board;

    //QWidget * top;

};

#endif // BOARD_H
