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
    
    // 5.
    // initialize Squares
    cout<<"*******************************"<<endl;
    Square s1 = Square(2,2,"red",3.4);
    Square* s2= new Square();
    cout<<"*******************************"<<endl;
    
    // 6.
    // initialize Circles
    cout<<"*******************************"<<endl;
    Circle c1 = Circle(2,2,"white", 26.7);
    Circle* c2 = new Circle();
    cout<<"*******************************"<<endl;
    
    //7.
    // delete squares and circles
    // Square s1 and Circle c1 were already destructed
    cout<<"*******************************"<<endl;
    delete s2;
    delete c2;
    cout<<"*******************************"<<endl;
    
    
    //8.
    // square as variable inside block
    cout<<"*******************************"<<endl;
    {Square s3 = Square(1,1,"black",3.1);}
    cout<<"*******************************"<<endl;
    
    //9.
    // make sure to use endl
    
    return 0;
}

