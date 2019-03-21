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
    //lineEdit->setText("1");//第一次提交
    //lineEdit->setText("2");//第9次提交

    lineEdit->setText("16");//第18次提交

    w.show();
    return a.exec();
}
