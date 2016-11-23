#include "mainwindow.h"
#include <QApplication>
#include "board.h"

board* b;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    b = new board();
    w.globalboard(b);

    w.show();

    return a.exec();
}
