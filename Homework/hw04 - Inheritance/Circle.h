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
    // constructor
    Circle(int x, int y, string color, float rad):Shape(x,y,color){
        radius = rad;
    }
    
    // compute that area
    virtual float computeArea(){
        return M_PI * (radius*radius);
    }
        
};

#endif /* CIRCLE_H */

