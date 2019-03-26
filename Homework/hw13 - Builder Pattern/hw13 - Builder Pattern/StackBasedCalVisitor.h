/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackBasedCalVisitor.h
 * Author: tonysulfaro
 *
 * Created on March 22, 2019, 11:01 PM
 */

#ifndef STACKBASEDCALVISITOR_H
#define STACKBASEDCALVISITOR_H

#include "Visitor.h"
#include "TerminalNode.h"
#include "NonTerminalNode.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <stack>

class StackBasedCalVisitor: public Visitor{ //derived from vistor class
protected:
    stack<double> m_stack;
    
public:
    StackBasedCalVisitor(){};//ctor
    virtual ~StackBasedCalVisitor(){};//dtor
    virtual void visitTerminalNode(TerminalNode* trn);
    
    virtual void visitNonTerminalNode(NonTerminalNode* ntrn);
    double getResult();
    int stringtoDouble(string s);   

};

#endif /* STACKBASEDCalVISITOR_H */

