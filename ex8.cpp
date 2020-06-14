/******************************************************************************
Chapter3 - Calculations 
Ex8 - Write a program to evenly divide pizzas. Prompt for the number of people, the number of pizzas, and the number of slices per pizza. 
Ensure that the number of pieces comes out even. Display the number of pieces of pizza each person should get. 
If there are leftovers, show the number of leftover pieces.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;
 
int main(){
    
       
    int slices, people, pizza, numberofslices, slicesperperson, leftoverslices;
    
    cout << "How many people are there: ";
    cin >> people;
    
    cout << "How many pizzas do you have: ";
    cin >> pizza;
    
    cout << "How many slices in each pizza: ";
    cin >> slices;
    
    numberofslices = slices * pizza;
    
    slicesperperson = numberofslices/people;
    
    leftoverslices = numberofslices  - slicesperperson * people;
    
    cout << "There are " << pizza << " pizzas and " << people << " people \n";
    
    cout << "Each person will get " << slicesperperson << " slices\n";
    
    cout << "There are " << leftoverslices << " slices left \n";
    
    return 0;
    
}
