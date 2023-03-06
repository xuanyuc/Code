#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:
    //槽，返回void，需要声明和实现
public slots:
    void doSome();
};

#endif // STUDENT_H
