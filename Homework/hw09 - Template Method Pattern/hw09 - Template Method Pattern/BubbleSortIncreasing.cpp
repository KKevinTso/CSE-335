/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.cpp
 * Author: tonys
 * 
 * Created on February 13, 2019, 5:43 PM
 */

#include "BubbleSortIncreasing.h"

bool BubbleSortIncreasing::needSwap(SortableVector* sortableVector,int i, int j) const{
    return !sortableVector -> smaller(i,j);
}
