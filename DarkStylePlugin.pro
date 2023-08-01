
QT       += core gui widgets

TARGET = darkstyleplugin
TEMPLATE = lib
CONFIG += plugin
CONFIG += c++11

DESTDIR = $$PWD/_out
macx:DESTDIR = $$PWD/_out/DarkStyleExampleApp.app/Contents/MacOS

unix:QMAKE_CXXFLAGS += -Wall -Wextra -Werror=return-type -Werror=trigraphs -Wno-switch -Wno-reorder

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
	plugin/LightStyle.cpp \
    plugin/NinePatch.cpp \
    plugin/DarkStyle.cpp \
    plugin/DarkStylePlugin.cpp \
	plugin/TraditionalWindowsStyleTreeControl.cpp

HEADERS += \
    ../DarkStyleInterface.h \
	plugin/LightStyle.h \
    plugin/NinePatch.h \
    plugin/DarkStyle.h \
    plugin/DarkStylePlugin.h \
	plugin/TraditionalWindowsStyleTreeControl.h

FORMS +=

RESOURCES += \
    resources.qrc

DISTFILES += \
    darkstyleplugin.json


