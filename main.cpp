#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QDebug>
#include <QPushButton>

#include <QTabWidget> //第五次修改
#include <QLineEdit>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QLineEdit * lineEdit = new QLineEdit(&w) ;
    //lineEdit->setText("5");//第12次提交
    lineEdit->setText("9");//第14次提交

    w.show();
    return a.exec();
}
