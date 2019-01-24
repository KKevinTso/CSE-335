/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: tonysulfaro
 *
 * Created on January 23, 2019, 5:01 PM
 */

#ifndef SQUARE_H
#define SQUARE_H

using namespace std;
#include <string>
#include <iostream>

// Square from Shape class
class Square: public Shape{
private:
    float edgeLength;
public:
    // constructor
    Square(int x, int y, string color, float edge_length):Shape(x,y,color){
        edgeLength = edge_length;
    }
    
    float computeArea(){
        return edgeLength * 2;
    }
};

#endif /* SQUARE_H */

