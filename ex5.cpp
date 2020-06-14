/******************************************************************************
Chapter2 - Input,Processing and Output
Ex4 - Write a program that prompts for two numbers. Print the sum, difference, product, 
and quotient of those numbers as shown in the example output
Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;
 
int main(){
    
    int num1, num2, sum, product, quotient, subtraction;
    
    cout << "What is the first number: ";
    cin >> num1;
    
    cout << "What is the second number: ";
    cin >> num2;
    
    sum = num1 + num2;
    
    subtraction = num1 - num2;
    
    product = num1 * num2;
    
    quotient = num1/num2;
    
    cout << num1 << " + " << num2 << " = " <<  sum << "\n";
    
    cout << num1 << " - " << num2 << " = " <<  subtraction << "\n";
    
    cout << num1 << " * " << num2 << " = " <<  product << "\n";
    
    cout << num1 << " / " << num2 << " = " <<  quotient << "\n";
    
    return 0;
}
