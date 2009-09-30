#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	// this is a comment

	// This is a new one

	// Merge comment

	// mon comment
}

MainWindow::~MainWindow()
{
    delete ui;
}
