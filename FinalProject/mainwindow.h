#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "board.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void globalboard(board* b);

private slots:

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    board *gboard;
};

#endif // MAINWINDOW_H