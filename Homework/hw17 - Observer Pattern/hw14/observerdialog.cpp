#include "observerdialog.h"
#include "ui_observerdialog.h"

#include <string>
using std::string;
using std::to_string;

ObserverDialog::ObserverDialog(QWidget *parent, int value) :
    QDialog(parent),
    ui(new Ui::ObserverDialog)
{
    ui->setupUi(this);
    QString s = QString::number(value);
    ui->label_result->setText(s);
}

ObserverDialog::~ObserverDialog()
{
    delete ui;
}

void ObserverDialog::setObserverID(int id, int value){
    observerID = id;
    mValue = value;
}

void ObserverDialog::on_ObserverDeleteButton_clicked()
{
    emit observerDeleted(observerID);
}
