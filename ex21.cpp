/******************************************************************************
Chapter4 - Makaing decisions
Ex21 - Write a program that converts a number from 1 to 12 to the corresponding month. 
Prompt for a number and display the corresponding calendar month, with 1 being January 
and 12 being December. For any value outside that range, display an appropriate error message.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/
#include <iostream>
using namespace std;

int main (){
    
    int i;
    
    char months [12] [10]= {"January", "february", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << "Please enter the number of your month: ";
    cin >> i;
    //cout << months[1];
    if(i >12){
        cout << "The number is incorrect";
    }
     else {
         cout << months[i-1];
     }
    
    
}
