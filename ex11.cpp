/******************************************************************************
Chapter3 - Calculations 
Ex10 - Write a program that converts currency. Specifically, convert euros to  U.S. dollars. 
Prompt for the amount of money in euros you have, and prompt for the current exchange 
rate of the euro. Print out the new amount in U.S. dollars.
Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    
    float amount1, amount2, exchange_rate;
    
    cout << "How many euros are you exchanging: ";
    cin >> amount1;
    
    cout << "What is the exchange rate: ";
    cin >> exchange_rate;
    
    amount2 = amount1 * exchange_rate/100;
    
    cout << amount1 << " euros at an exchange rate of " << exchange_rate << " is " << amount2 << " U.S. dollars";
    
    return 0;
}
