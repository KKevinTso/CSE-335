/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tonysulfaro
 *
 * Created on January 8, 2019, 9:47 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include "Dog.h"
#define SOMECONSTANT 200
using namespace std;

void printSomeConstant(unsigned int someconstant){
    cout << someconstant << endl;
}

void printSomeConstantPointer(const unsigned int* someConstantPtr){
    cout << * someConstantPtr << endl;
}

bool youngerDog(const Dog& dog1, const Dog& dog2){
    return dog1.getAge() < dog2.getAge();
}

int main(int argc, char** argv) {
    
    cout << "hello there" << endl;
    const unsigned int someconstant = 200;
    printSomeConstantPointer(&someconstant);
    printSomeConstant(someconstant);
    
    const Dog Dog1("Rocky", "Jane Doe", 2, 50);
    const Dog Dog2("Dusty", "John Smith", 10, 100);
    Dog Dog3("Snickers", "Jane Doe", 3, 75);
    cout << youngerDog(Dog1, Dog2) << endl;

    cout << Dog1.getName() << endl;
    // this will not work
    //Dog1.setName("not rocky");
    
    //this will work
    cout << Dog3.getName() << endl;
    Dog3.setName("Not Snickers");
    cout << Dog3.getName() << endl;

    return 0;
}

