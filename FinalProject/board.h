#ifndef BOARD_H
#define BOARD_H
#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsView>
#include "balloon.h"
#include <QObject>

namespace Ui {
class board;
}

class board : public QWidget
{
    Q_OBJECT

public:
    board(QWidget *parent = 0);
    virtual~board();

    //Public functions
    void start();

    //Public Variables
    QGraphicsScene *GraphicsScene;
    balloon* bloon;

private:
    Ui::board *ui;
};

#endif // BOARD_H
