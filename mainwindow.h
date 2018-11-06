#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QPen>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::MainWindow *ui;
    enum				/*定义图形的类型 */
    {
        NONE_DRAW,
        BRUSH_DRAW,
        LINE_DRAW,
        ARROW_DRAW,
        RECT_DRAW,
        ELLIPSE_DRAW,
        TEXT_DRAW,
        FILL_DRAW,
        ERASE_DRAW,
        MOVE_DRAW,
        SELECT_DRAW,
        CLIP_DRAW,
        IMAGE_DRAW,
        DEL_DRAW,
        COLORPICKER_DRAW
    } draw_type;
    QPoint startPnt;   //起点
    QPoint endPnt;     //终点
    QImage image, image_temp;
    QPen pen;
    QBrush brush;
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void draw(QImage &img);

private slots:
    void setBrush();
    void setLine();
    void setEllipse();
    void setRect();
    void clear();
    void addPenWidth();
    void reducePenWidth();
};

#endif // MAINWINDOW_H
