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

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *ObserverDeleteButton;
    QLabel *label;
    QLabel *label_result;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        ObserverDeleteButton = new QPushButton(Dialog);
        ObserverDeleteButton->setObjectName(QStringLiteral("ObserverDeleteButton"));
        ObserverDeleteButton->setGeometry(QRect(40, 180, 201, 61));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(48, 90, 91, 51));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label_result = new QLabel(Dialog);
        label_result->setObjectName(QStringLiteral("label_result"));
        label_result->setGeometry(QRect(160, 100, 191, 31));
        label_result->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        ObserverDeleteButton->setText(QApplication::translate("Dialog", "Reset", nullptr));
        label->setText(QApplication::translate("Dialog", "Value:", nullptr));
        label_result->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVERDIALOG_H
