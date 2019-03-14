/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Laptop.cpp
 * Author: tonysulfaro
 * 
 * Created on March 14, 2019, 5:33 PM
 */

#include "Laptop.h"

Laptop::Laptop(string name, double price, string speed):Item(name,price) {
    m_speed = speed;
}

Laptop::~Laptop() {
}

void Laptop::print() const{
    cout << "(Laptop " << "Name=" << m_name << ", Laptop Price=" << m_price << ");";
}