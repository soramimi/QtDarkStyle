#-------------------------------------------------
#
# Project created by QtCreator 2017-12-05T02:43:54
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = darkscrollbarplugin
TEMPLATE = lib
CONFIG += plugin
CONFIG += c++11

DESTDIR = $$PWD/_out

unix:QMAKE_CXXFLAGS += -Wall -Wextra -Werror=return-type -Werror=trigraphs -Wno-switch -Wno-reorder

DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH += $$PWD/darktheme/src
INCLUDEPATH += $$PWD/src


SOURCES += \
    darktheme/src/NinePatch.cpp \
    darktheme/src/DarkStyle.cpp \
	darktheme/src/LegacyWindowsStyleTreeControl.cpp \
    darktheme/src/DarkStylePlugin.cpp

HEADERS += \
	../../DarkStyleInterface.h \
    darktheme/src/NinePatch.h \
    darktheme/src/DarkStyle.h \
	darktheme/src/LegacyWindowsStyleTreeControl.h \
    darktheme/src/DarkStylePlugin.h

FORMS +=

RESOURCES += \
    resources.qrc

DISTFILES += \
    darkstyleplugin.json
