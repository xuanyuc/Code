#include "student.h"
#include <QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}
void Student::doSome(){
    qDebug()<<"跑出教室"<<endl;
}
