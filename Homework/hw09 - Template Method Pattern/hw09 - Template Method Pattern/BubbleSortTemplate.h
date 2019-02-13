/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortTemplate.h
 * Author: tonys
 *
 * Created on February 13, 2019, 5:32 PM
 */

#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H

#include <string>
#include <iostream>
#include <iomanip>
#include "SortableVector.h"
#include <vector>

using namespace std;

class BubbleSortTemplate{
    
public:
    virtual bool needSwap( SortableVector* sortableVector,int i , int j) const = 0;
    
    
    void sort(SortableVector* sortableVector){
        bool sorted = false;          //preforms bubble sort algorithm 
        int n=sortableVector->getSize(); //from lecture slides
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(needSwap(sortableVector,i-1,i)){
                    sortableVector->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    
    
};


#endif /* BUBBLESORTTEMPLATE_H */

