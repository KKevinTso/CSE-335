/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Phone.h
 * Author: tonysulfaro
 *
 * Created on March 14, 2019, 5:33 PM
 */

#ifndef PHONE_H
#define PHONE_H

#include "Item.h"

#include <string>
#include <iostream>

using std::string;
using std::cout;

class Phone: public Item {
protected:
    int m_year;
public:
    Phone(string name, double price, int year);
    virtual ~Phone();
    
    virtual void print() const{
        cout << "Phone Name:" << m_name << " Phone Price:" << m_price << " Phone Year:" << m_year;
    }
};

#endif /* PHONE_H */

