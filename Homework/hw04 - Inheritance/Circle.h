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

using namespace std;

class Circle: public Shape{
private:
    const float pi = 3.1495;
    float radius;
public:
    Circle(int x, int y, string color, float rad):Shape(x,y,color){
        radius = rad;
    }
    
    virtual float computeArea(){
        return pi * (radius*radius);
    }
        
};

#endif /* CIRCLE_H */

