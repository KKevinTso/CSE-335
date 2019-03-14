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
#include <iostream>

using std::string;
using std::cout;

class Laptop: public Item {
protected:
    string m_speed;
public:
    Laptop(string name, double price, string speed);
    virtual ~Laptop();
    
    virtual void print() const;
};

#endif /* LAPTOP_H */

