#ifndef DARTS_H
#define DARTS_H

#include <QPixMap>
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsPixMapItem>


class darts: public QGraphicsPixMapItem
{
  Q_OBJECT

public: 
  explicit darts (QGraphicsItem *parent = 0); 
  ~darts(); 
  
public slots: 
  
  
private: 

QPixmap * dart_pic; 

}; 

#endif // DARTS_H
