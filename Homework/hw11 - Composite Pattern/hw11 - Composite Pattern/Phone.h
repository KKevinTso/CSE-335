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

using std::string;

class Phone: public Item {
public:
    Phone(string name, unsigned int price);
    Phone(const Phone& orig);
    virtual ~Phone();
private:

};

#endif /* PHONE_H */

