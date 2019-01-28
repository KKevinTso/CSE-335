/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.h
 * Author: tonysulfaro
 *
 * Created on January 23, 2019, 5:01 PM
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#define M_PI 3.14159265358979323846 //https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c

using namespace std;

// Circle extends class Shape
class Circle: public Shape{
private:
    float radius;
public:
    // params constructor
    Circle(int x, int y, string color, float rad):Shape(x,y,color){
        radius = rad;
        cout << "In Circle constructor with parameters." << endl;
    }
    
    // default constructor
    Circle(){
        radius = 0;
        x_location = 0;
        y_location = 0;
        color = "";
        cout << "In default Circle constructor." << endl;
    }
    
    // assingment operator overload
    Circle& operator=(const Circle &circle){
        if(this!= &circle){
            radius = circle.getRadius();
            cout << "In Assingment Operator." << endl;
        }
        else cout<<"In Assignment Operator: Self-copying"<<endl;
        return *this;
    }
    
    virtual ~Circle(){
        cout << "In Circle destructor." << endl;
    }
    
    // compute that area
    virtual float computeArea(){
        return M_PI * (radius*radius);
    }
    
    float getRadius() const{
        return radius;
    }
        
};

#endif /* CIRCLE_H */

