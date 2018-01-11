#include "MainWindow.h"
#include <QApplication>
#include "src/DarkStyle.h"

class MyStyle : public QProxyStyle {
public:

	// QStyle interface
public:
	int pixelMetric(PixelMetric metric, const QStyleOption *option, const QWidget *widget) const
	{
		if (metric == PM_SliderLength) {
			return std::min(widget->width(), widget->height());
		}
		return QProxyStyle::pixelMetric(metric, option, widget);
	}
	void drawPrimitive(PrimitiveElement pe, const QStyleOption *opt, QPainter *p, const QWidget *w) const
	{
		QProxyStyle::drawPrimitive(pe, opt, p, w);
	}
	void drawControl(ControlElement element, const QStyleOption *opt, QPainter *p, const QWidget *w) const
	{
		QProxyStyle::drawControl(element, opt, p, w);
	}
	void drawComplexControl(ComplexControl cc, const QStyleOptionComplex *opt, QPainter *p, const QWidget *widget) const
	{
		QProxyStyle::drawComplexControl(cc, opt, p, widget);
	}
};

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	a.setStyle(new DarkStyle);

	MainWindow w;
	w.show();

	return a.exec();
}
