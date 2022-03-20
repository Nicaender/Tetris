#ifndef TETRIS_H
#define TETRIS_H

#include <QMainWindow>
#include <tetris_manager.h>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class Tetris; }
QT_END_NAMESPACE

class Tetris : public QMainWindow
{
    Q_OBJECT

public:
    Tetris(QWidget *parent = nullptr);
    ~Tetris();

public slots:
    void render_screen(Stone*); // belum tahu ya

private:
    Ui::Tetris *ui;
    QLabel* stone_labels[MAX_SIZE_Y][MAX_SIZE_X];
};
#endif // TETRIS_H
