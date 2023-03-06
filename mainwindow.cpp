#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include"mypushbutton.h"
#include<QDebug>
#include<QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //初始化列表，对成员变量进行初始化，且只能初始化一次，不能在下面函数体再次初始化
    //成员变量(参数变量parent)
{
    QPushButton * btn1 = new QPushButton;
    //btn->show(); // btn->show会以顶层方式弹出空间,页面空间分离
    btn1->setParent(this);
    btn1->setText("第一个按钮");
    btn1->resize(150,150);
    btn1->move(100,100);
    // 按照控件大小创建窗口
    QPushButton * btn2 = new QPushButton("第二个按钮",this);

    //设置窗口大小:resieze();
    resize(500,500);
    setWindowTitle("第一个窗口");
    //设置固定窗口大小
    setFixedSize(500,500);

    //创建一个自己按钮对象
    MyPushButton* myBtn = new MyPushButton;
    myBtn->setText("这是我的按钮");
    myBtn->setParent(this);//设置在对象树中，随着this父类产生而构造。父类关闭里面子类自动析构
    myBtn->resize(60,60);
    myBtn->move(200,200);
    //简单信号与槽
    connect(myBtn,&QPushButton::clicked,this,&QWidget::close);

}
//打印了析构函数代码，再依次找父类中子类的析构函数并打印，一直到最子层，再进行释放，依次从子向父释放
//对象树机制，一定程度上简化了内存释放机制
MainWindow::~MainWindow()
{
    qDebug()<<"窗口调用析构函数"<<endl;
    delete ui;
}

