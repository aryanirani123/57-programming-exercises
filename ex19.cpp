/******************************************************************************
Chapter4 - Makaing decisions
Ex19 - Create a program to calculate the body mass index (BMI) for a person using the
person’s height in inches and weight in pounds. The program should prompt the user for
weight and height. Calculate the BMI by using the following formula:

                   bmi = (weight / (height × height)) * 703

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include<iostream>
using namespace std;
 
int main()
{
 
float bmi,w,h; 

cout<<"Please Enter your weight in Pounds : ";
    cin>>w;
    
cout<<"Please Enter your Height in Inches : ";
    cin>>h;
bmi=(w*703)/(h*h);

cout<<"Your BMI is : "<<bmi<<endl;
 
if(bmi>25)
    cout<<"Overweight";
else if(bmi<25 && bmi>18.5)
    cout<<"Optimal";
else
    cout<<"Underweight";
return 0;
}
