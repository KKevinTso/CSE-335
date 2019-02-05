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
    
    public:
        
        vector<Type> vec;
        
        Type top() const{
            return vec[0];
        }
        
        Type pop(){
            Type t = top();
            vec.erase(vec.begin());
            return t;
        }
        
        void push(Type element){
            vec.push_back(element);
        }
        
        bool empty() const{
            return vec.empty();
        }
        
        int getSize() const{
            return vec.size();
        }
        
        void printAll() const{
            for(int i = 0; i < vec.size(); ++i){
                cout << vec[i] << endl;
            }
        }

};

#endif /* QUEUE_H */

