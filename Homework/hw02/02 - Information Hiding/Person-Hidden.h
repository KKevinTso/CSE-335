/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person-Hidden.h
 * Author: tonysulfaro
 *
 * Created on January 14, 2019, 3:50 PM
 */

#ifndef PERSON_HIDDEN_H
#define PERSON_HIDDEN_H

#include <cstdlib>
#include <iostream>
using namespace std;

class Person{
public:
    string publicThing;
    string publicString = "string action";
protected:
    int protectedDataInPerson;
private:
    int socialSecurityNumber;
public:
    Person(string a,int b,int c):publicThing(a),protectedDataInPerson(b),socialSecurityNumber(c){
    }
};
class Student: public Person{
public:
    Student(string a,int b,int c):Person(a,b,c){
    }
    
    void print(){
        cout<<publicThing<<endl;
        cout<<protectedDataInPerson<<endl;
        
        //cout<<socialSecurityNumber<<endl;
        //error: 'socialSecurityNumber' is a private member of 'Person'
    }
    
};
class ProtectedStudent: protected Person{
public:
    ProtectedStudent(string a,int b,int c):Person(a,b,c){
    }
    
    void print(){
        cout<<publicThing<<endl;
        cout<<protectedDataInPerson<<endl;
        
        //cout<<socialSecurityNumber<<endl;
        //error: 'socialSecurityNumber' is a private member of 'Person'
    }
};
class PrivateStudent: private Person{
public:
    PrivateStudent(string a,int b,int c):Person(a,b,c){
    }
    
    void print(){
        cout<<publicThing<<endl;
        cout<<protectedDataInPerson<<endl;
        
        //cout<<socialSecurityNumber<<endl;
        //error: 'socialSecurityNumber' is a private member of 'Person'
    }
};
class CSE335student: public ProtectedStudent{
public:
    CSE335student(string a,int b,int c):ProtectedStudent(a,b,c){
    };
    
    void print(){
        cout<<publicThing<<endl;
        cout<<protectedDataInPerson<<endl;
        
        //cout<<socialSecurityNumber<<endl;
        //error: 'socialSecurityNumber' is a private member of 'Person'
    }
};



#endif /* PERSON_HIDDEN_H */

