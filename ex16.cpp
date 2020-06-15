/******************************************************************************
Chapter4 - Makaing decisions
Ex16 -  Write a program that asks the user for their age and compare it to the legal driving age of sixteen. 
If the user is sixteen or older, then the program should display “You are old enough to legally drive.” If 
the user is under sixteen, the program should display “You are not old enough to legally drive.”

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int age, legal_age;
    
    
    legal_age = 16;
    
    cout << "What is your age: ";
    cin >> age;
    
    if(age >= legal_age){
        
        cout << "You are old enough to legally drive.";
    }
    
    else{
        
        cout << "You are not old enough to legally drive.";
    }
    
    return 0;
}
