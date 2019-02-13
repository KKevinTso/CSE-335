/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortTemplate.h
 * Author: tonys
 *
 * Created on February 13, 2019, 5:47 PM
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
    
    
    void sort(SortableVector* sortableVector);
    
    
};

#endif /* BUBBLESORTTEMPLATE_H */

