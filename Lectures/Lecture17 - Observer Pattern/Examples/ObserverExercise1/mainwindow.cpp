#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->HorizontalSlider->setMinimum(0);
    ui->HorizontalSlider->setMaximum(100);
    ui->ProgressBar->setMinimum(0);
    ui->ProgressBar->setMaximum(100);
    ui->ProgressLabel->setText("0");
    ui->ProgressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
