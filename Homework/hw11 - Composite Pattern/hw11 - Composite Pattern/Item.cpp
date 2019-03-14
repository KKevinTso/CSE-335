/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Item.cpp
 * Author: tonysulfaro
 * 
 * Created on March 14, 2019, 5:35 PM
 */

#include "Item.h"

Item::Item(string name, double price) {
    m_name = name;
    m_price = price;
}

Item::Item(const Item& orig) {
}

Item::~Item() {
}

