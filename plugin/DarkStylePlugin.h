#ifndef DARKSTYLEPLUGIN_H
#define DARKSTYLEPLUGIN_H

#include "../DarkStyleInterface.h"

#include <QObject>

class DarkStylePlugin : public QObject, public DarkStyleInterface {
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "jp.soramimi.DarkStylePlugin" FILE "darkstyleplugin.json")
	Q_INTERFACES(DarkStyleInterface)
public:
	QStyle *create();
};

#endif // DARKSTYLEPLUGIN_H
