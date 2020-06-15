/******************************************************************************
Chapter3 - Calculations 
Ex12 - Create a program that computes simple interest. Prompt for the principal amount, 
the rate as a percentage, and the time, and display the amount accrued (principal + interest).
Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    
    float principle, rate, time_period, interest, amount;
    
    cout << "Enter the principal: ";
    cin >> principal;
    
    cout << "Enter the rate of interest: ";
    cin >> rate;
    
    cout << "Enter the number of years: ";
    cin >> time_period;
    
    interest = principle * rate * time_period/100;
    amount = principle * (1 + rate * time_period/100);
    
    cout << "After " << time_period << " years " << rate << "%, the investment will be worth $" << amount;
    
    return 0;
}
