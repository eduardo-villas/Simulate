#-------------------------------------------------
#
# Project created by QtCreator 2015-08-29T09:55:14
#
#-------------------------------------------------

QT       += core
QT       -= gui

TARGET = SimulatedAnnealing
CONFIG   += console c++11
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    set.cpp \
    line.cpp \
    column.cpp

HEADERS += \
    set.h \
    line.h \
    column.h
