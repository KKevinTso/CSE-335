/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tonysulfaro
 *
 * Created on January 12, 2019, 9:47 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include "Person-Hidden.h"
#define SOMECONSTANT 200
using namespace std;

int main(int argc, char** argv) {
    
    //person
    Person p = Person("person_sample_text",2,3);
    cout << "Person:" << endl;
    cout << p.publicString << endl;
    
    //student
    Student s = Student("student_sample_text",5,6);
    cout << "Student:" << endl;
    cout << s.publicString << endl;
    s.print();
    
    //protected student
    ProtectedStudent prot_stu = ProtectedStudent("protected_student",12,12);
    prot_stu.print();
    
    //private student
    PrivateStudent priv_stu = PrivateStudent("private_student",13,13);
    priv_stu.print();
    //cout << priv_stu.publicString << endl;
    //error: 'publicString' is a private member of 'Person'
            
    //public 335 student
    CSE335student c = CSE335student("335_student_sample_text",8,9);
    cout << "CSE335 Student:" << endl;
    c.print();
    //cout << c.publicString << endl;
    
    return 0;
}

