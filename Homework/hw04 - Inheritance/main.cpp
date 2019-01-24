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
#include "Shape.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Shape sp = Shape(1,1,"red");
    sp.printColor();
    
    Square s = Square(1,1,"blue",3.1);
    cout << s.computeArea() << endl;
    return 0;
    
    Circle c = Circle(2,2,"green", 26.7);
    cout << c.computeArea() << endl;
}

