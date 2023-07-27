#include "MainWindow.h"
#include "MainWindow2.h"
#include "../DarkStyleInterface.h"
#include <QApplication>
#include <QPluginLoader>
#include <QProgressBar>
#include <QProxyStyle>


int main(int argc, char *argv[])
{
	if (0) {
		QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	}
	QApplication a(argc, argv);

	bool darkstyle = true;

#if 1
	QPluginLoader loader("darkstyleplugin");

	DarkStyleInterface *plugin = dynamic_cast<DarkStyleInterface *>(loader.instance());
	if (plugin) {
		if (darkstyle) {
            plugin->applyDarkStyle(&a);
		} else {
            plugin->applyLightStyle(&a);
		}
	}
#endif

	MainWindow w;
	w.setStyle(a.style());
	w.show();

	return a.exec();
}
