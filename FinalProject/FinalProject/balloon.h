#ifndef BALLOON_H
#define BALLOON_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
//#include "mainwindow.h"
//#include "board.h"


class balloon:public QGraphicsPixmapItem{
    //Q_OBJECT

public:

    balloon(QGraphicsItem* parent =0);
    void keyPressEvent(QKeyEvent* event);

    ~balloon();

public slots:

    void start_dart(); // function that will start the dart objects to move
   //void down();
   //void up();
   //void thow_darts();

private:

    QPixmap * balloon_image;

   //position will be determined in a different way
    /*
   //balloon position and size
   double x_balloon, y_balloon;
   const double balloon_width = 20.0;
   const double balloon_height = 20.0;
   */
};

#endif // BALLOON_H


