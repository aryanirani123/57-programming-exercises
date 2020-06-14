/******************************************************************************
Chapter2 - Input,Processing and Output
Ex6 - Create a program that determines how many years you have left until retirement and 
the year you can retire. It should prompt for your current age and 
the age you want to retire and display the output as shown in the example that follows.
Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;
 
int main(){
    
    
    int current_age, retire_age, number_of_years, current_year, retire_year;
    
    cout << "What is your current age: ";
    cin >> current_age;
    
    cout << "What age would you like to retire: ";
    cin >> retire_age;
    
    number_of_years = retire_age - current_age;
    
    cout << "You have " << number_of_years << " years left until you can retire.\n";
    
    current_year = 2020;
    
    retire_year = current_year + number_of_years;
    
    cout << "Its 2020,so you can retire in " << retire_year;
    return 0;
}
