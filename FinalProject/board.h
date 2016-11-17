#ifndef BOARD_H
#define BOARD_H
#include <QGraphicsScene>
#include <QWidget>

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
    QGraphicsScene *scene;

private:
    Ui::board *ui;
};

#endif // BOARD_H
