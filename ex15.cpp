/******************************************************************************
Chapter3 - Making Decisions  
Ex15 - Create a simple program that validates user login credentials. The program must prompt the user for a username and password. 
The program should compare the password given by the user to a known password. If the password matches, the program should display 
“Welcome!” If it doesn’t match, the program should display “I don’t know you.”

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/



#include<iostream>
using namespace std;

int main(){
    
    
    string password, entered_password;
    
    password = "abc$123";
    
    cout << "What is the password: ";
    cin >> entered_password;
    
    if(entered_password == password){
        
        cout << "Welcome!";
    }
    
    
    else{
        
        cout << "I don't know you.";
    }
    
    return 0;
}
