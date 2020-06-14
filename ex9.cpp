/******************************************************************************
Chapter3 - Calculations 
Ex9 - Calculate gallons of paint needed to paint the ceiling of a room. Prompt for the length and width, 
and assume one gallon covers 350 square feet. Display the number of gallons needed to paint the ceiling as a whole number.
Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
#include <cmath> 
using namespace std;
 
int main(){
    
    float length, breadth, area;
    float i;
    cout << "Enter the length: ";
    cin >> length;
    
    cout << "Enter the breadth: ";
    cin >> breadth;
    
    area = length * breadth;
    
    i = area/350;
    cout <<"Number of gallons: "<< ceil(i)<< "\n";
    
    return 0;
    
    
}
