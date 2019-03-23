/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TerminalNode.h
 * Author: tonysulfaro
 *
 * Created on March 22, 2019, 11:01 PM
 */

#ifndef TERMINALNODE_H
#define TERMINALNODE_H

#include "NonTerminalNode.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Node.h"

using std::cout;
using std::endl;

class TerminalNode: public Node {
public:
    TerminalNode(string value):Node(value){}//ctor
    virtual ~TerminalNode(){};//dtor
    virtual void Accept(Visitor* v){v->visitTerminalNode(this);}//uses visitor for pattern
    void setLeftChild(Node* left){cout<<"not used"; }
    void setRightChild(Node* left){cout<<"not used"; }//implemented virtual functions
    void print() {cout<<m_value;}
};

#endif /* TERMINALNODE_H */

