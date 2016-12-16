#include "darts.h"
#include "board.h"
#include "balloon.h"
#include <QTimer>
#include <stdlib.h>
#include <QGraphicsScene>
#include <QTime>

extern board* gboard; 

darts::darts(QGraphicsItem* parent): QGraphicsPixMapItem(parent)
{
  int randnumb = qrand()%700;//700 is the size of the board object
  setPos(500,randnumb); 
  
  std::ifstream fin ("C:/JoshCrasto/nov28commit/Final-Project-experimental/FinalProject/FinalProject/darts.png");
  if (!fin){
        std::cout<<"error opening file"<<std::endl;
  }
  
  QString pic_file2("C:/JoshCrasto/nov28commit/Final-Project-experimental/FinalProject/FinalProject/darts.png");
  dart_pic = new QPixmap (pic_file2);
  setPixmap(*dart_pic);
  
  QTimer* timer = new QTimer (this);
  
 
 }
 
 
darts::~darts ()
{

}
