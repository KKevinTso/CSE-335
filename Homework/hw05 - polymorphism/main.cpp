/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tonysulfaro
 *
 * Created on January 23, 2019, 4:10 PM
 */

#include <cstdlib>
#include <vector>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

/*
 *  Initializes then prints shapes
 */
int main(int argc, char** argv) {
    
    vector<Shape*> shape_collection;
    
    // initialize Squares
    Square s1 = Square(1,1,"black",3.1);
    Square s2= Square(1,1,"white",7.0);
    Square s3 = Square(1,1,"red",0.5);
    Square s4 = Square(1,1,"black",110.8);
    
    // add Squares to vector
    shape_collection.push_back(&s1);
    shape_collection.push_back(&s2);
    shape_collection.push_back(&s3);
    shape_collection.push_back(&s4);
    
    // initialize Circles
    Circle c1 = Circle(2,2,"white", 26.7);
    Circle c2 = Circle(2,2,"red", 3.00001);
    
    // add circles to vector
    shape_collection.push_back(&c1);
    shape_collection.push_back(&c2);
    
    
    for(int i = 0; i < shape_collection.size(); ++i){
        cout << "Shape Area: " << shape_collection[i]->computeArea() << endl; //prints returned area
        shape_collection[i]->printColor(); //prints color on its own
        cout << endl; //spacing
    }
    
    return 0;
}

