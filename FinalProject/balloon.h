#ifndef BALLOON_H
#define BALLOON_H
#include <QObject>
#include<QGraphicsScene>
#include<QGraphicsPixmapItem>
#include <QActionGroup>

class balloon
{
private:
    Q_OBJECT

public:
    balloon(QGraphicsItem *parent = 0);
};

#endif // BALLOON_H
