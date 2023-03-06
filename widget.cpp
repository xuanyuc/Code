#include "widget.h"
// Teacher类
//Student类
// 老师触发下课信号，学生出教室
widget::widget(QWidget *parent) : QWidget(parent)
{
    this->stu = new Student(this);
    this->t = new Teacher(this);
    // 信号与槽
    connect(t,&Teacher::afterClass,stu,&Student::doSome);
    classOver();
}
void widget::classOver(){
    emit t->afterClass();
}
