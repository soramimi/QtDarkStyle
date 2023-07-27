#include "MainWindow.h"
#include "MainWindow2.h"
#include "../DarkStyleInterface.h"
#include <QApplication>
#include <QPluginLoader>
#include <QProxyStyle>


int main(int argc, char *argv[])
{
	if (0) {
		QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	}
	QApplication a(argc, argv);

	bool darkstyle = true;


	QPluginLoader loader("darkstyleplugin");

	DarkStyleInterface *plugin = dynamic_cast<DarkStyleInterface *>(loader.instance());
	if (plugin) {
		if (darkstyle) {
			a.setStyle(plugin->createDarkStyle());
			a.setPalette(a.style()->standardPalette());
		} else {
			a.setStyle(plugin->createStandardStyle());
#ifndef Q_OS_WIN
			a.setPalette(a.style()->standardPalette());
#endif
		}
	}

	MainWindow w;
	w.setStyle(a.style());
	w.show();

	return a.exec();
}
