#include "alexlabel.h"
#include <QFont>

void AlexLabel::setFont(QFont qf){
    QLabel::setFont(qf);
    //QMessageBox::about(this, "test", qf.toString());
}

void AlexLabel::setFontByText(QString qs){
    this->setFont(QFont(qs));
}

void AlexLabel::modifyFontByCheckboxBold(bool b){
    QFont font=this->font();
    font.setWeight(0); //Weight { Light, Normal, DemiBold, Bold, Black }
    font.setBold(b);
    this->setFont(font);
    //QMessageBox::about(this, "test", font.toString());
}

void AlexLabel::modifyFontByCheckboxItalic(bool b){
    QFont font=this->font();
    font.setWeight(3); //Weight { Light, Normal, DemiBold, Bold, Black }
    font.setItalic(b);
    this->setFont(font);
    //QMessageBox::about(this, "test", font.toString());
}

void AlexLabel::modifyFontByCheckboxUnderline(bool b){
    QFont font=this->font();
    font.setUnderline(b);
    this->setFont(font);
    //QMessageBox::about(this, "test", font.toString());
}

void AlexLabel::modifyFontByRadioButtonArial(bool b){
    if(b){
        QFont font=this->font();
        this->setFontByText("Arial");
    }
}

void AlexLabel::modifyFontByRadioButtonTNR(bool b){
    if(b){
        QFont font=this->font();
        this->setFontByText("Times New Roman");
    }
}

void AlexLabel::modifyFontByRadioButtonSans(bool b){
    if(b){
        QFont font=this->font();
        this->setFontByText("Comic Sans MS");
    }
}

void AlexLabel::modifyFontByCheckboxSize(QString sizeString){
    //Get current font
    QFont font=this->font();
    //Modify the size of the font, keep other information of the font unchanged.
    int size = 10;


    if (sizeString == "small"){
        size = 10;
    }
    else if(sizeString == "medium"){
        size = 20;
    }
    else if(sizeString == "large"){
        size = 40;
    }

    font.setPixelSize(size);
    //Use the modified font
    this->setFont(font);
}

void AlexLabel::modifyFontBySliderValue(int size){
    //Get current font
    QFont font=this->font();
    //Modify the size of the font, keep other information of the font unchanged.
    if(size==0)
        font.setPointSize(12);
    else
        font.setPixelSize(size);
    //Use the modified font
    this->setFont(font);
}
