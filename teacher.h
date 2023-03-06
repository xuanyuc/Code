#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);
//自定义信号，只声明不实现，无返回值void
signals:
    void afterClass();
};

#endif // TEACHER_H
