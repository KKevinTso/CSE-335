/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpBuilder.h
 * Author: tonysulfaro
 *
 * Created on March 22, 2019, 8:45 PM
 */

#ifndef EXPRESSIONBUILDER_H
#define EXPRESSIONBUILDER_H
#include <stack>
#include <iostream>
#include "Node.h"
#include "Builder.h"
#include "NonTerminalNode.h"
#include "TerminalNode.h"

using std::stack;

class ExpBuilder: public Builder{
protected:
    stack<Node*> expStack;
public:
    virtual void addOperand(string operand){
        Node* newOperand = new NonTerminalNode(operand);
        expStack.push(newOperand);
    };
    
    virtual void addLiteral(string literal){
        Node* newOperand = new TerminalNode(literal);
        expStack.push(newOperand);
    };
    
    virtual void addLeftParenthesis(){};
    
    virtual void addRightParenthesis(){
        Node* rightChild = expStack.top();
        expStack.pop();
        Node* parent = expStack.top();
        expStack.pop();
        Node* leftChild = expStack.top();
        expStack.pop();
        parent->setLeftChild(leftChild);
        parent->setRightChild(rightChild);
        expStack.push(parent);
    };
    
    virtual Node* getExpression(){
        Node* root = expStack.top();
        expStack.pop();
        return root;
    };
};
#endif /* EXPRESSIONBUILDER_H */

