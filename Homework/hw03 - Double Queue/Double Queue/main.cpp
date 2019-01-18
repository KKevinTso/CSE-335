/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tonysulfaro
 *
 * Created on January 18, 2019, 2:27 PM
 */

#include <cstdlib>
#include "Queue.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    DoubleQueue dq = DoubleQueue();
    cout << "Double Queue:" << endl;
    dq.push_left("string1");
    dq.push_left("string2");
    dq.push_left("string3");
    dq.push_left("string4");
    dq.push_left("string5");
    dq.push_right("string6");
    dq.push_right("string7");
    dq.push_right("string8");
    dq.removeAll();
    cout << endl;
    
    Stack stk = Stack();
    cout << "Stack:" << endl;
    stk.push("string100");
    cout << stk.top() << endl;
    stk.push("string200");
    cout << stk.top() << endl;
    stk.push("string300");
    cout << stk.top() << endl;
    stk.push("string400");
    cout << stk.top() << endl;
    
    cout << "Removing Elements:" << endl;
    cout << stk.pop() << endl;
    cout << stk.pop() << endl;
    cout << stk.pop() << endl;
    cout << stk.pop() << endl;
    // try to remove nothing
    cout << stk.pop() << endl;
    cout << endl;
    
    Queue q = Queue(5);
    cout << "Queue:" << endl;
    q.push("string10");
    q.push("string20");
    q.push("string30");
    q.push("string40");
    q.print();
    cout << "Popping Elements:" << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    // try to remove nothing
    cout << q.pop() << endl;
    
    return 0;
}

