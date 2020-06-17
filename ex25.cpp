/******************************************************************************
Chapter5 - Functions
Ex25 - Create a program that determines the complexity of a given password based on these rules:
• A very weak password contains only numbers and is fewer than eight characters.
• A weak password contains onlyl etters and is fewer than eight characters.
• A strong password contains letters and at least one number and is at least eight characters.
• A very strong password contains letters, numbers, and special characters and is at least eight characters.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
void printStrongNess(string& input) 
{ 
    int n = input.length(); 
  
    
    bool hasLower = false, hasUpper = false; 
    bool hasDigit = false, specialChar = false; 
    string normalChars = "abcdefghijklmnopqrstu"
        "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 "; 
  
    for (int i = 0; i < n; i++) { 
        if (islower(input[i])) 
            hasLower = true; 
        if (isupper(input[i])) 
            hasUpper = true; 
        if (isdigit(input[i])) 
            hasDigit = true; 
  
        size_t special = input.find_first_not_of(normalChars); 
        if (special != string::npos) 
            specialChar = true; 
    } 
  
    
    cout << "Strength of password:-"; 
    if (hasLower && hasUpper && hasDigit &&  
        specialChar && (n >= 8)) 
        cout << "Strong" << endl; 
    else if ((hasLower || hasUpper) &&  
             specialChar && (n >= 6)) 
        cout << "Moderate" << endl; 
    else
        cout << "Weak" << endl; 
} 
  

int main() 
{ 
    string input;
    cout << "Enter  a password: ";
    cin >> input;
    
    printStrongNess(input); 
    return 0; 
}
