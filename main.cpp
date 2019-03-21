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
    w.show();
    QLineEdit * lineEdit = new QLineEdit(&w) ;
    //lineEdit->setText("1");//第一次提交
    lineEdit->setText("2");//第9次提交


    return a.exec();
}
