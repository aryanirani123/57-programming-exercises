/******************************************************************************
Chapter3 - Calculations 
Ex7 - Create a program that calculates the area of a room. Prompt the user for the length and width of the room in feet. 
Then display the area in both square feet and square meters.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;
 
int main(){
    
    int length,  breadth, area;
    float area_metre;
    
    cout << "What is the length of the room in feet: ";
    cin >> length;
    
    cout << "What is the width of the room in feet: ";
    cin >> breadth;
    
    area = length * breadth;
    
    cout << area << " square feet \n";
    
    area_metre = area/10.764;
    
    cout << area_metre << " square metres";
    
    return 0;
    
    
}
