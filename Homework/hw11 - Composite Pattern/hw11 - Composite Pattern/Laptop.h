/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Laptop.h
 * Author: tonysulfaro
 *
 * Created on March 14, 2019, 5:33 PM
 */

#ifndef LAPTOP_H
#define LAPTOP_H

#include "Item.h"

#include <string>

using std::string;

class Laptop: public Item {
protected:
    string m_name;
    unsigned int m_price;
public:
    Laptop(string name, unsigned int price);
    Laptop(const Laptop& orig);
    virtual ~Laptop();
private:

};

#endif /* LAPTOP_H */

