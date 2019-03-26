/********************************************************************************
** Form generated from reading UI file 'observerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSERVERDIALOG_H
#define UI_OBSERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_ObserverDialog
{
public:
    QProgressBar *progressBar;

    void setupUi(QDialog *ObserverDialog)
    {
        if (ObserverDialog->objectName().isEmpty())
            ObserverDialog->setObjectName(QStringLiteral("ObserverDialog"));
        ObserverDialog->resize(400, 300);
        progressBar = new QProgressBar(ObserverDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(40, 110, 311, 41));
        progressBar->setValue(24);

        retranslateUi(ObserverDialog);

        QMetaObject::connectSlotsByName(ObserverDialog);
    } // setupUi

    void retranslateUi(QDialog *ObserverDialog)
    {
        ObserverDialog->setWindowTitle(QApplication::translate("ObserverDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ObserverDialog: public Ui_ObserverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVERDIALOG_H
