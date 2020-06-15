/******************************************************************************
Chapter4 - Mkaing decisions
Ex14 - Write a simple program to compute the tax on an order amount. The program should prompt for the order amount and the state. 
If the state is “WI,” then the order must be charged 5.5% tax. The program should display the subtotal, tax, and total for 
Wisconsin residents but display just the total for non-residents.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int amount, tax_;
    string state;
    float i, final_price;
    
    cout << "What is the order amount: ";
    cin >> amount;
    
    cout << "What is the state: ";
    cin >> state;
    
    i  = 5.5 * amount/100;
    
    if(state == "Wi"){
        
        final_price = i + amount;
        cout << "The tax is " << i << "\n";
        
        cout << "The total is " << final_price;
        
    }
    
    else{
        
       cout << "The total is " << amount;
    }
    
    return 0;
}
