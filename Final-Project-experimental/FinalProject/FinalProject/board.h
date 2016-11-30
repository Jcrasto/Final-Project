#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsView>
#include <QObject>
#include "mainwindow.h"
#include <QMainWindow>
#include <iostream>
#include <QTimer>
#include <QtGlobal>
#include "balloon.h"
#include <QLabel>

//extern class MainWindow;

namespace Ui {
class board;
}

class board : public QGraphicsView
{
    Q_OBJECT

 public slots:
   // void start();

public:
    explicit board(QWidget *parent = 0);
    virtual~board();

    //Public Variables
    QGraphicsScene *GraphicsScene;

private:
    Ui::board *ui;

   // balloon * bloon;
    //QPixmap * bground;
    const QPixmap * balloon_image;

    //balloon position
    QPoint * balloon_posit;

    //QImage balloon_image;
    //QImage bground;

    QTimer timer;
    qreal frames;

    QWidget * Board;
    //QLabel**labels;

    //QWidget * top;

};

#endif // BOARD_H
