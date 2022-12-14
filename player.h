#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QList>
#include "enemy2.h"
#include "food.h"
#include "heart.h"

#include <QTimer>
//#include "heart.h"
class Player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:

public:
    Player(int boardData[11][11]);
    QPixmap image;
    int row, column;
    int data[11][11];
    int health;
    QPixmap hearts[3];
    bool immune= false;
    QTimer timer2;
    heart h[3];
    heart h2[3];
    heart h3[3];
//    enemy m1;
//    enemy2 m2;
public slots:
    void keyPressEvent(QKeyEvent* event);
    void immunity();

};
#endif // PLAYER_H
