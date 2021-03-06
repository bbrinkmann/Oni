#-------------------------------------------------
#
# Project created by QtCreator 2017-03-09T16:20:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Oni
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    oni.cpp \
    card.cpp \
    piece.cpp \
    aboutwindow.cpp \
    button.cpp \
    field.cpp \
    cardslot.cpp \
    Engine.cpp

HEADERS  += mainwindow.h \
    oni.h \
    card.h \
    piece.h \
    aboutwindow.h \
    button.h \
    field.h \
    cardslot.h \
    Engine.h

FORMS    += mainwindow.ui \
    aboutwindow.ui

RESOURCES += \
    res.qrc

DISTFILES +=
