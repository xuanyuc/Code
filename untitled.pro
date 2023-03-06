QT       += core gui  # Qt包含的模块core,GUI;还有 Network,等模块

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets  # Widget(4版本前包含在GUI，后独立出来)

CONFIG += c++11

#TARGET = 01_FirstProject  # 目标  debug目录下exe文件名称
#TEMPLATE = app # 模板  应用程序模板，lib动态库模板
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \  # 源文件，自动生成
    main.cpp \
    mainwindow.cpp \
    mypushbutton.cpp \
    student.cpp \
    teacher.cpp \
    widget.cpp

HEADERS += \
    mainwindow.h \
    mypushbutton.h \
    student.h \
    teacher.h \
    widget.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
