#-------------------------------------------------
#
# Project created by QtCreator 2017-12-05T02:43:54
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = DarkStyleExampleApp
TEMPLATE = app

DESTDIR = $$PWD/_out

CONFIG += c++11
unix:QMAKE_CXXFLAGS += -Wall -Wextra -Werror=return-type -Werror=trigraphs -Wno-switch -Wno-reorder

DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/src


SOURCES += \
        main.cpp \
		MainWindow.cpp

HEADERS += \
		MainWindow.h

FORMS += \
        MainWindow.ui

RESOURCES += \
    resources.qrc
