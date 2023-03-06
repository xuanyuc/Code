#include "mypushbutton.h"
#include<QDebug>
MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{
    qDebug()<<"我的按钮类构造函数调用"<<endl;
}
MyPushButton::~MyPushButton(){
    qDebug()<<"我的按钮类析构函数调用"<<endl;
}
