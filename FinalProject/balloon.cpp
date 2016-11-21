#include "balloon.h"
#include "board.h"



balloon::balloon(QGraphicsItem * parent):Qobject(),QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/image/balloon.png"));

}
