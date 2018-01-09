#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>

class ButtonImages {
public:
	QImage im_normal;
	QImage im_hover;
};

class ImageWidget : public QWidget
{
	Q_OBJECT
private:
	ButtonImages image_;
	bool press_ = false;
	bool hover_ = false;
public:
	explicit ImageWidget(QWidget *parent = nullptr);

	void setImage(ButtonImages im);
signals:

public slots:

	// QWidget interface
protected:
	void paintEvent(QPaintEvent *event);

	// QWidget interface
protected:

	// QObject interface
public:

	// QWidget interface
protected:
	void enterEvent(QEvent *event);
	void leaveEvent(QEvent *event);

	// QWidget interface
protected:
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
};

#endif // IMAGEWIDGET_H
