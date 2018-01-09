#include "ImageWidget.h"

#include <QDebug>
#include <QEvent>
#include <QPainter>

ImageWidget::ImageWidget(QWidget *parent)
	: QWidget(parent)
{
	setMouseTracking(true);
}

void ImageWidget::setImage(ButtonImages im)
{
	image_ = im;
}

void ImageWidget::paintEvent(QPaintEvent *event)
{
	int w = width();
	int h = height();
	if (w < 1 || h < 1) return;


	QPainter pr(this);
	pr.fillRect(0, 0, w, h, QColor(64, 64, 64));

	int iw = image_.im_normal.width();
	int ih = image_.im_normal.height();
	if (iw < 1 || ih < 1) return;

	int x = (w - iw) / 2;
	int y = (h - ih) / 2;

	QImage *im = &image_.im_normal;
	if (hover_) {
		im = &image_.im_hover;
	}
	pr.drawImage(x, y, *im);
}

void ImageWidget::enterEvent(QEvent *event)
{
	hover_ = true;
	update();
}

void ImageWidget::leaveEvent(QEvent *event)
{
	hover_ = false;
	update();
}

void ImageWidget::mousePressEvent(QMouseEvent *event)
{
	press_ = true;
	update();
}

void ImageWidget::mouseReleaseEvent(QMouseEvent *event)
{
	press_ = false;
	update();
}
