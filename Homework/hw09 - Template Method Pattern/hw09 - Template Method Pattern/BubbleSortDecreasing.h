/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: tonys
 *
 * Created on February 13, 2019, 5:34 PM
 */
#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include <string>
#include <iostream>
#include <iomanip>
#include "BubbleSortTemplate.h"
#include <vector>

using namespace std;

class BubbleSortDecreasing : public BubbleSortTemplate{
public:
    bool needSwap(SortableVector* sortableVector,int i, int j) const{
        return sortableVector -> smaller(i,j);  //sorts in decreasing order
    }
};


#endif /* BUBBLESORTDECREASING_H */
