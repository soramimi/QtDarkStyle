
QT       += core gui widgets

TARGET = darkscrollbarplugin
TEMPLATE = lib
CONFIG += plugin
CONFIG += c++11

DESTDIR = $$PWD/_out

unix:QMAKE_CXXFLAGS += -Wall -Wextra -Werror=return-type -Werror=trigraphs -Wno-switch -Wno-reorder

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    plugin/NinePatch.cpp \
    plugin/DarkStyle.cpp \
    plugin/LegacyWindowsStyleTreeControl.cpp \
    plugin/DarkStylePlugin.cpp

HEADERS += \
    ../DarkStyleInterface.h \
    plugin/NinePatch.h \
    plugin/DarkStyle.h \
    plugin/LegacyWindowsStyleTreeControl.h \
    plugin/DarkStylePlugin.h

FORMS +=

RESOURCES += \
    resources.qrc

DISTFILES += \
    darkstyleplugin.json
