#ifndef ALEXLABEL_H
#define ALEXLABEL_H
#include <QObject>
#include <QLabel>
#include <QFont>
#include <QMessageBox>

/*Lessons:
 * 1. For any class with signals or slots, it must have the Q_OBJECT macro.
 * 2. Must separate .h and .cpp file. Otherwise you will get "undefined reference to vtable" error.
 *
 */

class AlexLabel: public QLabel{
    Q_OBJECT

public:
    AlexLabel(QWidget* qw):QLabel(qw){};
    //virtual ~AlexLabel(){};

public slots:
    //For receiving signal from QFontComboBox: void currentFontChanged(const QFont& font)
    void setFont(QFont);
    //For receiving signal QLineEdit for font family: void textChanged(const QString& text)
    void setFontByText(QString);

    //For receiving signal QLineEdit for font size: void textChanged(const QString& text)
    void modifyFontByCheckboxSize(QString);

    //radio button groups
    void modifyFontByRadioButtonArial(bool);
    void modifyFontByRadioButtonTNR(bool);
    void modifyFontByRadioButtonSans(bool);

    void modifyFontBySliderValue(int);

    //event handlers for ui elements
    void modifySliderValue(QString);
};

#endif // ALEXLABEL_H
