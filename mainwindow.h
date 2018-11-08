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
        DEL_DRAW,
        COLORPICKER_DRAW,
        STAMP_DRAW
    } draw_type;
    QPoint startPnt;   //起点
    QPoint endPnt;     //终点
    QImage image, image_temp;
    QPixmap pixmap_stamp;
    QPen pen;
    QBrush brush;
    QColor color;
    QString path;
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void draw(QImage &img);

private slots:
    void setBrush();
    void setLine();
    void setEllipse();
    void setRect();
    void setStamp();
    void changeStamp();
    void changeColor();
    void clear();
    void addPenWidth();
    void reducePenWidth();
};

#endif // MAINWINDOW_H
