/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: tonysulfaro
 *
 * Created on January 23, 2019, 5:01 PM
 */

#ifndef SHAPE_H
#define SHAPE_H
using namespace std;
#include <string>
#include <iostream>

class Shape{
protected:
    int x_location;
    int y_location;
    string color;
public:
    // constructor
    Shape(int x, int y, string color_value){
        x_location = x;
        y_location = y;
        color = color_value;
    }
    
    // defines computeArea function for derived classes to use
    virtual float computeArea() = 0;
    
    void printColor(){
        cout << "Shape Color:" << color << endl;
    }
};

#endif /* SHAPE_H */

