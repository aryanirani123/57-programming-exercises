/******************************************************************************
Chapter4 - Makaing decisions
Ex17 -  Create a program that prompts for your weight, gender, number of drinks, 
the amount of alcohol by volume of the drinks consumed, and the amount of time 
since your last drink. Calculate your blood alcohol content (BAC).

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    float alcohol, weight, ratio_men, ratio_women, hours, BAC1, BAC2;
    
    string gender, gender1, gender2;
    
    ratio_men = 0.73;
    ratio_women = 0.66;
    
    gender1 = "male";
    gender2 = "female";
    
    cout << "Amount of alcohol consumed (in ounces): ";
    cin >> alcohol;
    
    cout << "What is your weight: ";
    cin >> weight;
    
    cout << "Number of hours since you last drank: ";
    cin >> hours;
    
    cout << "What is your gender: ";
    cin >> gender;
    
    
    
    
    if(gender == gender1){
        BAC1 = (alcohol * 5.14/weight * ratio_men) -0.15 * hours;
        cout << "Your BAC is " << BAC1 <<  ". \n";
        if (BAC1 >= 0.08){
            cout << "It is not legal for you to drive.";
        }
        else{
            cout << "Its is legal for you to drive.";
        }
    }
    
    
    else{
        
        BAC2 = (alcohol * 5.14/weight * ratio_women) -0.15 * hours;
        cout << "Your BAC is " << BAC2 << ". \n";
        
         if (BAC2 >= 0.08){
            cout << "It is not legal for you to drive.";
        }
        else{
            cout << "Its is legal for you to drive.";
        }
        
    }
    
}
