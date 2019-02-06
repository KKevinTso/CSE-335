/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.h
 * Author: tonysulfaro
 *
 * Created on February 5, 2019, 1:01 PM
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

template <class Type>class Queue{ 
    
    private:
        vector<Type> vec;
    
    public:
        // get top element
        Type top() const{
            return vec[0];
        }
        
        // remove top element and return it
        Type pop(){
            Type t = top();
            vec.erase(vec.begin());
            return t;
        }
        
        // add element to Queue
        void push(Type element){
            vec.push_back(element);
        }
        
        // check if is empty
        bool empty() const{
            return vec.empty();
        }
        
        // get number of elements in Queue
        int getSize() const{
            return vec.size();
        }
        
        // print elements in Queue in order
        void printAll() const{
            for(int i = 0; i < vec.size(); ++i){
                cout << vec[i] << endl;
            }
        }
};

#endif /* QUEUE_H */

