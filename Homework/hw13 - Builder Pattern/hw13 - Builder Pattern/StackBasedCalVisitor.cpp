/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "StackBasedCalVisitor.h"

void StackBasedCalVisitor::visitNonTerminalNode(NonTerminalNode* ntrn){
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
        
        if(value1 == "+" ){
            z = x+y;
        }
        if(value1 == "-"){
            z = y-x;
        }
        if(value1 == "/"){
            z= y/x;
        }
        if(value1 == "*"){
            z = x*y;
        }
        
        m_stack.push(z);
} //addds sum to the stack

void StackBasedCalVisitor::visitTerminalNode(TerminalNode* trn){
        double value =  stringtoDouble(trn->getValue());
        m_stack.push(value); //gets value from terminal node and pushes into stack
}

double StackBasedCalVisitor::getResult(){
    double result = m_stack.top();//top values is sum
    m_stack.pop(); //pop and return sum
    return result;
}

int StackBasedCalVisitor::stringtoDouble(string s){ // helper function to change string to double 
    double sum=std::stod(s);
    return sum;
}  
