#include "MainWindow2.h"
#include "ui_MainWindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow2)
{
	ui->setupUi(this);
}

MainWindow2::~MainWindow2()
{
	delete ui;
}
