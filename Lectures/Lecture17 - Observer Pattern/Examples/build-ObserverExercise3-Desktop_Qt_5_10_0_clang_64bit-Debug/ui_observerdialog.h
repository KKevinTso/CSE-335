/********************************************************************************
** Form generated from reading UI file 'observerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObserverDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ObserverDeleteButton;
    QLabel *label;
    QLabel *label_result;

    void setupUi(QDialog *ObserverDialog)
    {
        if (ObserverDialog->objectName().isEmpty())
            ObserverDialog->setObjectName(QStringLiteral("ObserverDialog"));
        ObserverDialog->resize(400, 300);
        layoutWidget = new QWidget(ObserverDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 70, 291, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ObserverDeleteButton = new QPushButton(layoutWidget);
        ObserverDeleteButton->setObjectName(QStringLiteral("ObserverDeleteButton"));

        verticalLayout->addWidget(ObserverDeleteButton);

        label = new QLabel(ObserverDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 171, 31));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label_result = new QLabel(ObserverDialog);
        label_result->setObjectName(QStringLiteral("label_result"));
        label_result->setGeometry(QRect(180, 30, 201, 31));
        label_result->setFont(font);

        retranslateUi(ObserverDialog);
        QObject::connect(ObserverDeleteButton, SIGNAL(clicked()), ObserverDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(ObserverDialog);
    } // setupUi

    void retranslateUi(QDialog *ObserverDialog)
    {
        ObserverDialog->setWindowTitle(QApplication::translate("ObserverDialog", "Dialog", nullptr));
        ObserverDeleteButton->setText(QApplication::translate("ObserverDialog", "Reset", nullptr));
        label->setText(QApplication::translate("ObserverDialog", "Value:", nullptr));
        label_result->setText(QApplication::translate("ObserverDialog", "oops error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObserverDialog: public Ui_ObserverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVERDIALOG_H
