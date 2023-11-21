#-------------------------------------------------
#
# Project created by QtCreator 2023-04-21T22:00:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lab_8
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    drugs.cpp \
    patients.cpp \
    dispensing.cpp \
    qtableviewmodel.cpp \
    calc.cpp \
    calcfacade.cpp \
    observer.cpp

HEADERS  += mainwindow.h \
    drugs.h \
    patients.h \
    dispensing.h \
    qtableviewmodel.h \
    calc.h \
    calcfacade.h \
    observer.h

FORMS    += mainwindow.ui
