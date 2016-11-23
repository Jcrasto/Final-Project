#include "balloon.h"
#include "board.h"
#include <QObject>
#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>


balloon::balloon(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{

    setPixmap(QPixmap &(":/images/balloon.png"));

}
