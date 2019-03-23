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

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <stack>
#include "Visitor.h"
#include "TerminalNode.h"
#include "NonTerminalNode.h"
using namespace std;

#ifndef STACKBASEDCALVISITOR_H
#define STACKBASEDCALVISITOR_H
class StackBasedCalVisitor: public Visitor{ //derived from vistor class
protected:
    stack<double> m_stack;
public:
    StackBasedCalVisitor(){};//ctor
    virtual ~StackBasedCalVisitor(){};//dtor
    virtual void visitTerminalNode(TerminalNode* trn){
        double value =  stringtoDouble(trn->getValue());
        m_stack.push(value); //gets value from terminal node and pushes into stack
        
    };
    virtual void visitNonTerminalNode(NonTerminalNode* ntrn){
        std::string value1;
        double sum;
        if(ntrn->hasLeftChild()){  //
            ntrn->getLeftChild()->Accept(this); //accept the left child if there is one
            value1 = ntrn->getValue(); //store expression  
        }
        if(ntrn->hasRightChild()){//accept from right children if there ae any
            ntrn->getRightChild()->Accept(this);
        }

        double x=m_stack.top();
        m_stack.pop();
        double y = m_stack.top(); //takes the two values and wanted preformed operation
        m_stack.pop();
        double z ;
        
        if(value1 == "+" ){ //adds values
            
            z = x+y;
        }
        if(value1 == "-"){ //subtracts values
            z = y-x;
        }
        if(value1 == "/"){ //divides values
            z= y/x;
        }
        if(value1 == "*"){ //multiply values
            z = x*y;
        }
        m_stack.push(z);} //addds sum to the stack
            
    double getResult(){
        double result = m_stack.top();//top values is sum
       m_stack.pop(); //pop and return sum
        return result;};//returns sum from the stack
        
       
int stringtoDouble(string s){ // helper function to change string to double 
       double sum=std::stod(s);
        return sum;
    }     
};


#endif /* STACKBASEDCalVISITOR_H */

