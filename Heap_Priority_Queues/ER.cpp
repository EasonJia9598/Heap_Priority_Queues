//
//  main.cpp
//  Heap_Priority_Queues
//
//  Created by WillJia on 08/04/2018.
//  Copyright © 2018 Zesheng Jia A00416452. All rights reserved.
//  github upload

#include <iostream>
#include <string>
#include <iterator>
#include <sstream>

#include "Heap_PriorityQueue.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << "Welcome to FeelBetter ER managment system!" << endl;
    cout << "At any time you can choose one of the following optioins" << endl;
    cout << "a - for admitting a patient"<< endl;
    cout << "t - for treating a patient" << endl;
    cout << "q - for quitting the system\n" << endl;
    
    Heap_PriorityQueue<string>patients;
    
    char option;
    
    do{
        cout << "Patients wating: " << patients.getPatientsNumber() << ". Action(a,t,q)?";
        cin >> option;
        
        if (option == 'a') {
            string name ,priority, tem;
            string symptoms;
            cout << "Name:";
            getline (std::cin,tem);
            getline (std::cin,name);
            cout << "Priority:";
            getline (cin,priority);
            cout << "Symptoms:";
            getline (std::cin,symptoms);
            std::ostringstream oss;
            oss << priority << "," << name << "," << priority << "," << symptoms;
            patients.enqueue(oss.str());
            
            
        }else if(option == 't'){
            cout << "TREATING---->" << endl;
            if (patients.isEmpty()) {
                cout << "\nNo patient Left:\n" << endl;
                continue;
            }
            
            stringstream ss(patients.peek());
            patients.dequeue();
            string tem,name,priority,symptoms;
            /* read from the string stream into variables using the comma as a delimeter */
            
            getline(ss,tem,',');
            getline(ss,name,',');
            getline(ss,priority,',');
            getline(ss,symptoms,',');
            
            cout << "Name:" << name << endl;
            cout << "Priority:" << priority << endl;
            cout << "Symptoms:" << symptoms << endl;
            
            
        }else if(option == 'q'){
            cout << "Good Bye!" << endl;
            break;
        }else{
            cout << "Wrong input!!" << endl;
        }
        
        cout << endl;
        
     }while ( option != 'q');

    return 0;
}
