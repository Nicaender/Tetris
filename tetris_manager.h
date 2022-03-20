#ifndef TETRIS_MANAGER_H
#define TETRIS_MANAGER_H

#include <QThread>
#include <QObject>
#include <stone.h>

#define MAX_SIZE_X 10
#define MAX_SIZE_Y 16

class Tetris_manager : public QThread
{
    Q_OBJECT

public:
    explicit Tetris_manager(QObject *parent = nullptr);

private:
    Stone* game_space[MAX_SIZE_Y][MAX_SIZE_X];
};

#endif // TETRIS_MANAGER_H
