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
    // constructor with params
    Square(int x, int y, string color, float edge_length):Shape(x,y,color){
        edgeLength = edge_length;
        cout << "In Square constructor with params." << endl;
    }
    
    // default constructor
    Square(){
        cout << "In Square constructor without params" << endl;
    }
    
    // copy constructor
    Square(const Square &square):Shape(square){
        if(this != &square){
            edgeLength = square.getEdgeLength();
            cout << "In Square copy constructor" << endl;
        }
        else cout << "In Square copy constructor with Self-Copying." << endl;
    }
    
    // square destructor
    virtual ~Square(){
    cout << "In Square destructor." << endl;
    }
    
    // compute area function from virtual definition in base Shape class
    virtual float computeArea(){
        return edgeLength * 2;
    }
    
    float getEdgeLength() const{
        return edgeLength;
    }
};

#endif /* SQUARE_H */

