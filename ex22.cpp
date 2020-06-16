/******************************************************************************
Chapter4 - Makaing decisions
Ex22 - Write a program that asks for three numbers. Check first to see that all 
numbers are different. If they’re not different, then exit the program. Otherwise, 
display the largest number of the three.
 

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include<iostream>
using namespace std;
 
int main(){
    
    int num1, num2, num3, largest;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    if (num1 >= num2 && num1 >= num3 ) {
        largest = num1;
    }

    else if (num2 >= num1 && num2 >= num3){
        largest = num2;
    }
    
    else {
        largest = num3;
    }
    
    cout << "The largest number is " << largest;
    return 0;
}
    
