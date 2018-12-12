#include "MainWindow.h"
#include <QApplication>
#include <QPluginLoader>
#include "../DarkStyleInterface.h"
#include <QProxyStyle>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

//	a.setAttribute(Qt::AA_EnableHighDpiScaling);

	QPluginLoader loader("darkstyleplugin");

	DarkStyleInterface *plugin = dynamic_cast<DarkStyleInterface *>(loader.instance());
	if (plugin) {
		a.setStyle(plugin->createDarkStyle());
//        a.setStyle(plugin->createStandardStyle());
	}

	MainWindow w;
	w.show();

	return a.exec();
}
