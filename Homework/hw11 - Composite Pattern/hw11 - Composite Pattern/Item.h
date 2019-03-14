/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Item.h
 * Author: tonysulfaro
 *
 * Created on March 14, 2019, 5:35 PM
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>
using std::string;

class Item {
protected:
    string m_name;
    double m_price;
public:
    Item(string name, double price);
    Item(const Item& orig);
    virtual ~Item();
    
    //getters
    virtual string getName() const{
        return m_name;
    }
    
    virtual double getPrice() const{
        return m_price;
    }
};

#endif /* ITEM_H */

