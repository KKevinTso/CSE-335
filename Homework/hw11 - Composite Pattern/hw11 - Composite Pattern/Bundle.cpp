/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bundle.cpp
 * Author: tonysulfaro
 * 
 * Created on March 14, 2019, 5:32 PM
 */

#include "Bundle.h"

Bundle::Bundle(string name, double discount_rate): Item(name, 0) {
    m_name = name;
    m_discount_rate = discount_rate;
}

Bundle::~Bundle() {
}

void Bundle::addItem(Item* item){
    items.push_back(item);
    m_price += item->getPrice()*m_discount_rate;
}

void Bundle::removeItem(Item* item){
    remove(items.begin(), items.end(), item);
    m_price -= item ->getPrice()*m_discount_rate;
}

void Bundle::print() const{
    cout << "Bundle " << m_name << " contains:(";
    for(auto a: items){
        a->print();
    }
    cout << ");" << "Bundle Price:" << m_price << ");";
}