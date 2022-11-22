#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QList>
#include <QTimer>
#include <QRandomGenerator>
class enemy : public QObject, public QGraphicsPixmapItem
{
public:
    enemy(int boardData[11][11]);
    int row, column;
public slots:
    void movement();
private:

    int data[11][11];
    int health;
   QTimer *timer;
   QRandomGenerator generator;
private slots:



};

#endif // ENEMY_H
