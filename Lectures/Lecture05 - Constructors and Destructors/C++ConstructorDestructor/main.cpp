#include <cstdlib>
#include <iostream>
#include <string>

#define NDEBUG 
#include <assert.h>

#include "Employee.h"
using namespace std;

class Base{
protected:
    int m_Num;
    Employee* m_EmployeePtr;
public:
    Base(){
        m_Num=0;
        m_EmployeePtr=NULL;
        cout<<"In Base Default Constructor"<<endl;
    };
    Base(const int& num,
                const string& firstName,
                const string& lastName,
                const string& departmentName,
                const unsigned short& hireYear){
        m_Num=num;
        m_EmployeePtr=new Employee(firstName,lastName,departmentName,hireYear);
        cout<<"In Base Constructor: "<<firstName<<endl;
    };
    ~Base(){
        cout<<"In Base Destructor: "<<m_EmployeePtr->getFirstName()<<endl;
        delete m_EmployeePtr;
    }
    int getNum() const{
        return m_Num;
    }
    Employee* getEmployeePtr() const{
        return m_EmployeePtr;
    }
    //Copy constructor
    Base(const Base& base){
        if(this != &base){
            m_Num=base.getNum();//This will not compile if getNum() is not a constant function. 
            m_EmployeePtr = new Employee(
                                base.getEmployeePtr()->getFirstName(),
                                base.getEmployeePtr()->getLastName(),
                                base.getEmployeePtr()->getDepartmentName(),
                                base.getEmployeePtr()->getHiringYear());
            cout<<"In Copy Constructor"<<endl;
        }
        else cout<<"In Copy Constructor: Self-copying"<<endl;
    }
    //Assignment operator
    Base& operator=(const Base& base){
        if(this != &base){
            delete m_EmployeePtr;
            m_Num=base.getNum();//This will not compile if getNum() is not a constant function. 
            m_EmployeePtr = new Employee(
                                base.getEmployeePtr()->getFirstName(),
                                base.getEmployeePtr()->getLastName(),
                                base.getEmployeePtr()->getDepartmentName(),
                                base.getEmployeePtr()->getHiringYear());
            cout<<"In Assignment Operator"<<endl;
        }
        else cout<<"In Assignment Operator: Self-copying"<<endl;
        return *this;
    }
};

class Derived: public Base{
public:
    Derived(const int& num,
                      const string& firstName,
                      const string& lastName,
                      const string& departmentName,
                      const unsigned short& hireYear)
    :Base(num,firstName,lastName,departmentName,hireYear){
        cout<<"In Derived Constructor: "<<firstName<<endl;
    };
    virtual ~Derived(){
        cout<<"In Derived Destructor:"<<Base::m_EmployeePtr->getFirstName()<<endl;
    }
};

void f(){
    cout<<"Entering f() *******************************"<<endl;
    Derived derivedObj2(2,"derivedObj2","derivedObj2","Sales",2010);
    cout<<"Leaving f() *******************************"<<endl;
}
int main(int argc, char** argv) {
    Derived derivedObj1(2,"derivedObj1","derivedObj1","Sales",2010);
    //{Derived derivedObj1(2,"derivedObj1","derivedObj1","Sales",2010);}
    
    //Derived* derivedObj1Ptr = new Derived(2,"derivedObj2","derivedObj2","Sales",2010);
    //delete derivedObj1Ptr;
    
    Derived derivedObj2(2,"derivedObj2","derivedObj2","Sales2",2010);
    
    f();
    
    int a=2;
    int b=3;
    assert(a==b);
    //Base baseObj1(2,"baseObj1","baseObj1","Sales",2010);
    //Base baseObj2(baseObj1);
    //baseObj2 = baseObj1;
    
    /*
    cout<<"*******************************"<<endl;
    Derived* derivedObjPtr=new Derived(2,"derivedObjPtr","derivedObjPtr","Sales",2010);
    cout<<"*******************************"<<endl;
    Base* baseObjPtr=new Derived(2,"baseObjPtr","baseObjPtr","Sales",2010);
    cout<<"*******************************"<<endl;
    delete derivedObjPtr;
    cout<<"*******************************"<<endl;
    delete baseObjPtr;
    cout<<"*******************************"<<endl;
    return 0;
     */
}

