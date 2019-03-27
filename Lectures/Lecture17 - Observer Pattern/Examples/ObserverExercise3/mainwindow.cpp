#include "mainwindow.h"
#include "ui_observerdialog.h"
#include "ui_mainwindow.h"
#include "observerdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    observerID=0;
    ui->label->setText("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreateButton_clicked()
{
    ObserverDialog* newListener = new ObserverDialog(this, ui->horizontalSlider->value());
    listeners.push_back(newListener);
    newListener->show();
    newListener->setObserverID(observerID, ui->horizontalSlider->value());
    observerID++;
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), newListener->getUi()->horizontalSliderDialog, SLOT(setValue(int)));
    //connect(newListener->getUi()->horizontalSliderDialog, SIGNAL(valueChanged(int)), ui->horizontalSlider, SLOT(setValue(int)));
    connect(newListener, SIGNAL(observerDeleted(unsigned int)), this, SLOT(deleteObserver(unsigned int)));
}

void MainWindow::on_DeleteButton_clicked()
{
    if(observerID>0){
        ObserverDialog* lastListener = listeners.back();
        lastListener->close();
        listeners.pop_back();
        //ui->label->setText("The " + QString::number(lastListener->getObserverID()) + "th observer is deleted!");
        observerID--;
    }
    ui->horizontalSlider->setValue(0);
}

void MainWindow::deleteObserver(unsigned int id){
    observerID--;
    for(unsigned int i=0; i<listeners.size(); i++){
        if(listeners[i]->getObserverID()==id) listeners.erase(listeners.begin()+i);
    }
    //ui->label->setText("The " + QString::number(id+1) + "th observer is deleted!");
}
