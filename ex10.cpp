/******************************************************************************
Chapter3 - Calculations 
Ex10 - Create a simple self-checkout system. Prompt for the prices and quantities of three items. Calculate the subtotal 
of the items. Then calculate the tax using a tax rate of 5.5%. Print out the line items with the quantity and total, and 
then print out the subtotal,tax amount, and total.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    
    float price1, quantity1,price2, quantity2,price3, quantity3;
    float total1, total2, total3,tax, sum, bill;
    
    cout << "Enter the price of item 1: \n";
    cin >> price1;
    
    cout << "Enter the quantity of item 1:  \n ";
    cin >> quantity1;
    
    cout << "Enter the price of item 2:  \n";
    cin >> price2;
    
    cout << "Enter the quantity of item 2:  \n";
    cin >> quantity2;
    
    cout << "Enter the price of item 3:  \n";
    cin >> price3;
    
    cout << "Enter the quantity of item 3:  \n";
    cin >> quantity3;
    
    total1 = price1 * quantity1;
    total2 = price2 * quantity2;
    total3 = price3 * quantity3;
    
    sum = total1 + total2 + total3;
    tax = 5.5 *sum/100;
    bill = tax + sum;
    
    cout << "Subtotal: $" << sum << "\n";
    cout << "Tax: $" << tax << "\n";
    cout << "Total: $" << bill << "\n";
    
    return 0;
}
