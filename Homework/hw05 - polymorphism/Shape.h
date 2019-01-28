/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: tonysulfaro
 *
 * Created on January 28, 2019, 5:01 PM
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
    Shape* shapePtr;
public:
    // constructor with params
    Shape(int x, int y, string color_value){
        x_location = x;
        y_location = y;
        color = color_value;
        cout << "Shape Constructor with params." << endl;
    }
    
    // default constructor
    Shape(){
        x_location = 0;
        y_location = 0;
        color = "";
        cout << "Shape Constructor without params." << endl;
    }
    
    // copy constructor
    Shape(const Shape &shape){
        if(this != &shape){
            color = shape.getColor();//This will not compile if getColor() is not a constant function.
            x_location = shape.getxLocation();
            y_location = shape.getyLocation();
                   
            cout<<"In Shape Copy Constructor"<<endl;
        }
        else cout<<"In Shape Copy Constructor: Self-copying"<<endl;
    }
    
    // shape destructor
    virtual ~Shape(){
    cout << "In Shape destructor."<< endl;
    }
   
    // Assignment operator
    Shape& operator=(const Shape& shape){
    if(this!=&shape){
        // when out of scope the shape deletes itself, no need to do it manually here
        color = shape.getColor();
        x_location = shape.getxLocation();
        y_location = shape.getyLocation();
        cout<<"In Assignment Operator"<<endl;
    }
    else cout<<"In Assignment Operator: Self-copying"<<endl;
    return *this;
}
    
    // defines computeArea function for derived classes to use
    virtual float computeArea() = 0;
    
    string getColor() const{
        return color;
    }
    
    int getxLocation() const{
        return x_location;
    }
    
    int getyLocation() const{
        return y_location;
    }
    
    void printColor(){
        cout << "Shape Color:" << color << endl;
    }
};

#endif /* SHAPE_H */

