#include "tetris.h"
#include "ui_tetris.h"

Tetris::Tetris(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tetris)
{
    ui->setupUi(this);

    for(int i = 0; i < MAX_SIZE_Y; i++)
    {
        for(int j = 0; j < MAX_SIZE_X; j++)
        {
            stone_labels[i][j] = new QLabel(this);
            (stone_labels[i][j])->setGeometry(50 * j, 50 * i, 50, 50);
            if((j + i) % 2 == 0)
                (stone_labels[i][j])->setStyleSheet("background-color:rgb(205,255,205);border: 1px solid rgb(255, 150, 150);");
            else
                (stone_labels[i][j])->setStyleSheet("background-color:rgb(205,205,255);border: 1px solid rgb(255, 150, 150);");
            (stone_labels[i][j])->setAutoFillBackground(true);
        }
    }
}

Tetris::~Tetris()
{
    delete ui;
}

void Tetris::render_screen(Stone *)
{

}

