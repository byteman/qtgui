#-------------------------------------------------
#
# Project created by QtCreator 2019-07-26T22:29:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    formmain.cpp \
    mytitlebar.cpp \
    basewindow.cpp

HEADERS  += mainwindow.h \
    formmain.h \
    mytitlebar.h \
    basewindow.h

FORMS    += mainwindow.ui \
    formmain.ui

RESOURCES += \
    res.qrc
