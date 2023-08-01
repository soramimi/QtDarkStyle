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


	QPluginLoader loader("darkstyleplugin");

	DarkStyleInterface *plugin = dynamic_cast<DarkStyleInterface *>(loader.instance());
	if (plugin) {
		a.setStyle(plugin->createDarkStyle());
//		a.setStyle(plugin->createStandardStyle());
		a.setPalette(a.style()->standardPalette());
	}


	MainWindow w;
	w.setStyle(a.style());
	w.show();

	return a.exec();
}
