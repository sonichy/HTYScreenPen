#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // 使用 x11/xwayland 运行
    qputenv("QT_QPA_PLATFORM", "xcb");
    QApplication a(argc, argv);
    qSetMessagePattern("[ %{file}: %{line} ] %{message}");
    MainWindow w;
    w.show();
    return a.exec();
}
