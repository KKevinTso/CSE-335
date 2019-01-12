/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dog.h
 * Author: tonysulfaro
 * PID: A52995491
 * 
 * Created on January 8, 2019, 10:00 PM
 */

#ifndef DOG_H
#define DOG_H

class Dog{
protected:
    string m_Name;
    string m_OwnerName;
    unsigned short m_Age;
    unsigned short m_Weight;


public:
    // constructor
    Dog(const string& Name, const string& OwnerName, const unsigned short Age, const unsigned short Weight){
        m_Name = Name;
        m_OwnerName = OwnerName;
        m_Age = Age;
        m_Weight = Weight;
    }

    // getters
    string getName() const{
        return m_Name;
    }
    
    string getOwnerName() const{
        return m_OwnerName;
    }
    
    unsigned short getAge() const{
        return m_Age;
    }
    
    unsigned short getWeight() const{
        return m_Weight;
    }
    
    // setters
    void setName(const string& Name){
        m_Name = Name;
    }
    
    void setOwnerName(const string& OwnerName){
        m_OwnerName = OwnerName;
    }
    
    void setAge(const unsigned short Age){
        m_Age = Age;
    }
    
    void setWeight(const unsigned short Weight){
        m_Weight = Weight;
    }
    
};
            
#endif /* DOG_H */

