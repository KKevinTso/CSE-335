/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: tonys
 *
 * Created on February 13, 2019, 5:35 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class BubbleSortIncreasing : public BubbleSortTemplate{
public:
    bool needSwap(SortableVector* sortableVector,int i, int j) const{
        return !sortableVector -> smaller(i,j); //sorts in increasing order
    }
};

#endif /* BUBBLESORTINCREASING_H */

