#ifndef OBSERVERDIALOG_H
#define OBSERVERDIALOG_H

#include <QDialog>

namespace Ui {
class ObserverDialog;
}

class ObserverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ObserverDialog(QWidget *parent = 0);
    ~ObserverDialog();
    void setObserverID(int);
    unsigned int getObserverID() const {return observerID;};
    Ui::ObserverDialog* getUi() const {return ui;};

signals:
    void observerDeleted(unsigned int);

private slots:
    void on_ObserverDeleteButton_clicked();

private:
    Ui::ObserverDialog *ui;
    unsigned int observerID;
};

#endif // OBSERVERDIALOG_H
