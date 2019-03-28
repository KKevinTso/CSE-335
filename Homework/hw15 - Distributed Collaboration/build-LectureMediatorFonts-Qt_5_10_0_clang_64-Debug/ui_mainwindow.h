/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <alexlabel.h>
#include <alexlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditSize;
    QLabel *labelFamily;
    QLabel *label_3;
    QComboBox *comboBoxEditSize;
    QLabel *label;
    QFontComboBox *fontComboBox;
    QSlider *sliderEditSize;
    QWidget *widgetWeight;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxBold;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxUnderline;
    QLabel *label_4;
    AlexLineEdit *lineEditFamily;
    AlexLabel *labelFox;
    QGroupBox *groupBox;
    QRadioButton *radioButtonArial;
    QRadioButton *radioButtonTNR;
    QRadioButton *radioButtonSans;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(777, 391);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 7, 0, 1, 1);

        lineEditSize = new QLineEdit(centralWidget);
        lineEditSize->setObjectName(QStringLiteral("lineEditSize"));

        gridLayout_2->addWidget(lineEditSize, 5, 1, 1, 1);

        labelFamily = new QLabel(centralWidget);
        labelFamily->setObjectName(QStringLiteral("labelFamily"));

        gridLayout_2->addWidget(labelFamily, 1, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 5, 0, 1, 1);

        comboBoxEditSize = new QComboBox(centralWidget);
        comboBoxEditSize->setObjectName(QStringLiteral("comboBoxEditSize"));

        gridLayout_2->addWidget(comboBoxEditSize, 6, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        gridLayout_2->addWidget(fontComboBox, 2, 1, 1, 1);

        sliderEditSize = new QSlider(centralWidget);
        sliderEditSize->setObjectName(QStringLiteral("sliderEditSize"));
        sliderEditSize->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderEditSize, 7, 1, 1, 1);

        widgetWeight = new QWidget(centralWidget);
        widgetWeight->setObjectName(QStringLiteral("widgetWeight"));
        horizontalLayout = new QHBoxLayout(widgetWeight);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBoxBold = new QCheckBox(widgetWeight);
        checkBoxBold->setObjectName(QStringLiteral("checkBoxBold"));

        horizontalLayout->addWidget(checkBoxBold);

        checkBoxItalic = new QCheckBox(widgetWeight);
        checkBoxItalic->setObjectName(QStringLiteral("checkBoxItalic"));

        horizontalLayout->addWidget(checkBoxItalic);

        checkBoxUnderline = new QCheckBox(widgetWeight);
        checkBoxUnderline->setObjectName(QStringLiteral("checkBoxUnderline"));

        horizontalLayout->addWidget(checkBoxUnderline);


        gridLayout_2->addWidget(widgetWeight, 3, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        lineEditFamily = new AlexLineEdit(centralWidget);
        lineEditFamily->setObjectName(QStringLiteral("lineEditFamily"));

        gridLayout_2->addWidget(lineEditFamily, 1, 1, 1, 1);

        labelFox = new AlexLabel(centralWidget);
        labelFox->setObjectName(QStringLiteral("labelFox"));

        gridLayout_2->addWidget(labelFox, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        radioButtonArial = new QRadioButton(groupBox);
        radioButtonArial->setObjectName(QStringLiteral("radioButtonArial"));
        radioButtonArial->setGeometry(QRect(10, 30, 101, 20));
        radioButtonTNR = new QRadioButton(groupBox);
        radioButtonTNR->setObjectName(QStringLiteral("radioButtonTNR"));
        radioButtonTNR->setGeometry(QRect(220, 30, 161, 20));
        radioButtonSans = new QRadioButton(groupBox);
        radioButtonSans->setObjectName(QStringLiteral("radioButtonSans"));
        radioButtonSans->setGeometry(QRect(430, 30, 191, 20));

        gridLayout_2->addWidget(groupBox, 4, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        labelFamily->raise();
        lineEditFamily->raise();
        fontComboBox->raise();
        label->raise();
        widgetWeight->raise();
        label_3->raise();
        lineEditSize->raise();
        labelFox->raise();
        sliderEditSize->raise();
        label_2->raise();
        comboBoxEditSize->raise();
        label_4->raise();
        groupBox->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 777, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Font Size", nullptr));
        labelFamily->setText(QApplication::translate("MainWindow", "Family", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Font Size Type", nullptr));
        label->setText(QApplication::translate("MainWindow", "Family", nullptr));
        checkBoxBold->setText(QApplication::translate("MainWindow", "Arial", nullptr));
        checkBoxItalic->setText(QApplication::translate("MainWindow", "Times New Roman", nullptr));
        checkBoxUnderline->setText(QApplication::translate("MainWindow", "Comic Sans MS", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Font Size Type", nullptr));
        labelFox->setText(QApplication::translate("MainWindow", "The quick brown fox likes CSE 335", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        radioButtonArial->setText(QApplication::translate("MainWindow", "Arial", nullptr));
        radioButtonTNR->setText(QApplication::translate("MainWindow", "Times New Roman", nullptr));
        radioButtonSans->setText(QApplication::translate("MainWindow", "Comic Sans MS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
