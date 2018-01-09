#include "MainWindow.h"
#include "ui_MainWindow.h"

//ButtonImages generateImagesForButton(QString const &path);

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	ui->horizontalScrollBar->setRange(0, 100);
	ui->horizontalScrollBar->setPageStep(30);
	ui->verticalScrollBar->setRange(0, 100);
	ui->verticalScrollBar->setPageStep(30);

//	QImage im1;
//	im1.load(":/image/hsb/hsb_add_line.png");
//	im1.load(":/image/hsb/hsb_sub_line.png");
//	im1.load(":/image/vsb/vsb_sub_line.png");
//	im1.load(":/image/vsb/vsb_slider.png");
//	ButtonImages buttons = generateImagesForButton(":/image/vsb/vsb_slider.png");

//	ui->widget->setImage(buttons);
}

MainWindow::~MainWindow()
{
	delete ui;
}
