/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.h
 * Author: tonysulfaro
 *
 * Created on March 22, 2019, 11:02 PM
 */

#ifndef VISITOR_H
#define VISITOR_H

class NonTerminalNode;
class TerminalNode;

class Visitor{
public:
    Visitor(){};
    virtual ~Visitor(){};
    virtual void visitNonTerminalNode(NonTerminalNode*)=0;
    virtual void visitTerminalNode(TerminalNode*)=0;
};

#endif /* VISITOR_H */

