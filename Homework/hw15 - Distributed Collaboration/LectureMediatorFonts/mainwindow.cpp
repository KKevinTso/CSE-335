#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "alexlabel.h"
#include <QtGui>
#include <QMessageBox>
//#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->lineEditFamily,SIGNAL(textChanged(QString)),ui->labelFox,SLOT(setFontByText(QString)));
    connect(ui->lineEditFamily,SIGNAL(textChanged(QString)),ui->fontComboBox,SLOT(setCurrentText(QString)));
    connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)),ui->lineEditFamily,SLOT(showFont(QFont)));

    connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)),ui->labelFox,SLOT(setFont(QFont)));
    //Below works also.
    //connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)),this,SLOT(getFont(QFont)));



    //type in font size
    connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->labelFox,SLOT(modifyFontByCheckboxSize(QString)));

    //radio buttons for fonts
    connect(ui->radioButtonArial, SIGNAL(clicked(bool)),ui->labelFox, SLOT(modifyFontByRadioButtonArial(bool)));
    connect(ui->radioButtonTNR, SIGNAL(clicked(bool)),ui->labelFox, SLOT(modifyFontByRadioButtonTNR(bool)));
    connect(ui->radioButtonSans, SIGNAL(clicked(bool)),ui->labelFox, SLOT(modifyFontByRadioButtonSans(bool)));

    //slider size
    connect(ui->sliderEditSize, SIGNAL(valueChanged(int)), ui->labelFox,SLOT(modifyFontBySliderValue(int)));
}

void MainWindow::getFont(QFont qf){
    ui->labelFox->setFont(qf);
    //QMessageBox::about(this, "test", qf.toString());
}

MainWindow::~MainWindow()
{
    delete ui;
}
