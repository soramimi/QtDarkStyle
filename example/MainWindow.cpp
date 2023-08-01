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
	ui->listWidget->item(0)->setCheckState(Qt::Checked);

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
	QFont font = ui->tableWidget->item(0, 0)->font();
	font.setBold(true);
	ui->tableWidget->item(0, 0)->setFont(font);

	ui->tableWidget_2->setColumnCount(2);
	ui->tableWidget_2->setRowCount(2);
	ui->tableWidget_2->setHorizontalHeaderItem(0, new QTableWidgetItem("Hoge"));
	ui->tableWidget_2->setItem(0, 0, new QTableWidgetItem("Hoge"));
	ui->tableWidget_2->setItem(0, 1, new QTableWidgetItem("Fuga"));
	ui->tableWidget_2->setItem(1, 0, new QTableWidgetItem("Piyo"));
	ui->tableWidget_2->setItem(1, 1, new QTableWidgetItem("Pemo"));
	QFont font2 = ui->tableWidget_2->item(0, 0)->font();
	font2.setBold(true);
	ui->tableWidget_2->item(0, 0)->setFont(font2);


	ui->comboBox->addItem("Hoge");
	ui->comboBox->addItem("Fuga");
	ui->comboBox->addItem("Piyo");

    ui->action_fuga->setCheckable(true);
    ui->action_fuga->setChecked(true);
}

MainWindow::~MainWindow()
{
	delete ui;
}
