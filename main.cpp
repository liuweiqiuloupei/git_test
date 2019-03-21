#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QDebug>
#include <QPushButton>

#include <QTabWidget> //第五次修改

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
