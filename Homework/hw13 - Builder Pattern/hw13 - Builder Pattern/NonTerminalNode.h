/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NonTerminalNode.h
 * Author: tonysulfaro
 *
 * Created on March 22, 2019, 11:00 PM
 */

#ifndef NONTERMINALNODE_H
#define NONTERMINALNODE_H

#include "Node.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class NonTerminalNode : public Node {
protected:
    Node* m_leftChild; //pointers to the nodes children
    Node* m_rightChild;
    
public:
    NonTerminalNode(string value):Node(value),m_leftChild(NULL), m_rightChild(NULL){}//ctor
    virtual ~NonTerminalNode(){delete m_leftChild; delete m_rightChild;};//dtor
    virtual void Accept(Visitor* v){v->visitNonTerminalNode(this);} //accept function from slides
    void setLeftChild(Node* left){ m_leftChild = left;} //setter functions
    void setRightChild(Node* right){ m_rightChild = right;}
    Node* getLeftChild() const { return m_leftChild;} //getter functions
    Node* getRightChild() const { return m_rightChild;}
    bool hasRightChild(){if(m_rightChild){return true;}}
    bool hasLeftChild(){if(m_leftChild){return true;}} //checks for children
    void print(){
        if(m_leftChild){ //prints nonterminal node
            cout<<"(";
            m_leftChild->print();
       }
        cout<<m_value;
        if(m_rightChild){
            m_rightChild->print();
            cout<<")";
        }
    }
 
};

#endif /* NONTERMINALNODE_H */

