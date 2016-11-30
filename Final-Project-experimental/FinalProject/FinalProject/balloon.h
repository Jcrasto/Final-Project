#ifndef BALLOON_H
#define BALLOON_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include "mainwindow.h"
#include "board.h"


class balloon: public QGraphicsItem{
    Q_OBJECT

public:
    balloon(QGraphicsItem* parent =0);

    void keyPressEvent(QKeyEvent* event);

public slots:

   void down();
   void up();

private:

    QImage balloon_image;

   //balloon position and size
   double x_balloon, y_balloon;
   const double balloon_width = 20.0;
   const double balloon_height = 20.0;

};

#endif // BALLOON_H
