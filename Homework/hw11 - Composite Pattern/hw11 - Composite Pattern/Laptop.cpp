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

Laptop::Laptop(string name, unsigned int price) {
    m_name = name;
    m_price = price;
}

Laptop::Laptop(const Laptop& orig) {
}

Laptop::~Laptop() {
}

