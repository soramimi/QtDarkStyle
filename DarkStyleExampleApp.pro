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

LIBS += -L$$PWD/_out/
# -ldarkstyleplugin

SOURCES += \
        example/MainWindow2.cpp \
        example/main.cpp \
        example/MainWindow.cpp

HEADERS += \
        example/MainWindow.h \
        example/MainWindow2.h

FORMS += \
        example/MainWindow.ui \
        example/MainWindow2.ui

RESOURCES += \
    resources.qrc
