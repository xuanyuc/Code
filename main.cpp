#include "mainwindow.h"
#include "widget.h"
#include <QApplication>
/*
    注释 ctrl+/
    运行 ctrl+r
    编译 ctrl+b
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    widget w;
    w.show();
    //让应用程序进入消息循环(类似while(true){保持页面显示; if(点击叉号){break;}})
    return a.exec();
}
