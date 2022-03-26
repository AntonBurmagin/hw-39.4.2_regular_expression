#include "mainwindow.h"

#include <QApplication>
#include <QDesktopWidget>

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    auto desc = QApplication::desktop();
    w.resize(desc->width()*2/3, desc->height()*2/3);
    w.move((desc->width()-w.width())/2, (desc->height()-w.height())/2-20);
    w.show();
    return a.exec();
}
