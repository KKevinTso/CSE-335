/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tonysulfaro
 *
 * Created on February 5, 2019, 1:00 PM
 */

#include <cstdlib>
#include "Queue.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // Int Queue
    Queue<int> q;
    
    for(int i = 1; i <= 6; ++i){
        cout << "Pushing Integer element: " << i << endl;
        q.push(i);
    }
    
    int size = q.getSize();
    for(int i = 0; i < size; ++i){
        cout << "Popping Integer element: " << q.pop() << endl;
    }
    
    // Double Queue
    Queue<double> r;
    
    for(int i = 1; i <= 6; ++i){
        const double element = i / 10.0;
        cout << "Pushing Double element: " << element << endl;
        r.push(element);
    }
    
    size = r.getSize();
    for(int i = 0; i < size; ++i){
        cout << "Popping Double element: " << r.pop() << endl;
    }

    return 0;
}

