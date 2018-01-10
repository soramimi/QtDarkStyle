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

	ui->listWidget->addItem("Hello, world");

	QTreeWidgetItem *item = new QTreeWidgetItem(QStringList{"Foo"});
	ui->treeWidget->addTopLevelItem(item);
	item->addChild(new QTreeWidgetItem(QStringList{"Bar"}));
	item->setExpanded(true);

	ui->tableWidget->setColumnCount(2);
	ui->tableWidget->setRowCount(2);
	ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Hoge"));
	ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Hoge"));
	ui->tableWidget->setItem(0, 1, new QTableWidgetItem("Fuga"));
	ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Piyo"));
	ui->tableWidget->setItem(1, 1, new QTableWidgetItem("Pemo"));
}

MainWindow::~MainWindow()
{
	delete ui;
}
