/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.h
 * Author: tonysulfaro
 *
 * Created on January 18, 2019, 2:28 PM
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <vector>
using namespace std;

class DoubleQueue{
protected:
    vector<string> data;
public:
    void push_right(string element){
        data.push_back(element);
    }
    
    void push_left(string element){
        data.insert(data.begin(),element);
    }
    
    void pop_right(){
        data.pop_back();
    }
    
    string pop_left(){
        string popped = data[0];
        data.erase(data.begin());
        return popped;
    }
    
    void print(){
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    
    void removeAll(){
        for (int i = 0; i < data.size(); i++) {
            cout << pop_left() << endl;
        }
    }
    
    bool empty(){
        return data.size() == 0;
    }
};

class Stack: protected DoubleQueue{
public:
    
    void push(string element){
        push_left(element);
    }
    
    string pop(){
        if (empty()){
            return "Cannot pop, Stack is Empty!";
        }
        return pop_left();
    }
    
    string top(){
        return data[0];
    }
    
};

class Queue: protected DoubleQueue{
private:
    int size;
public:
    
    Queue(int a):DoubleQueue(){
        size = a;
    }
    
    bool push(string element){
        if (full()){
            return false;
        }
        push_right(element);
    }
    
    string pop(){
        if (empty()){
            return "Cannot pop, Queue is Empty!";
        }
        return pop_left();
    }
    
    bool full(){
        return data.size() == size;
    }
    
    void print(){
        for(int i = 0; i < data.size(); ++i){
            cout << data[i] << endl;
        }
    }
};

#endif /* QUEUE_H */

