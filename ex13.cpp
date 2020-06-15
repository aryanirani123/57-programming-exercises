/******************************************************************************
Chapter3 - Calculations 
Ex13 - Write a program to compute the value of an investment compounded over time. The program should ask for the starting amount, 
the number of years to invest, the interest rate,and the number of periods per year to compound

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float p,r,t,ci;

    cout<<"Enter Principle (Amount) :: ";
    cin>>p;
    cout<<"\nEnter Rate of Interest :: ";
    cin>>r;
    cout<<"\nEnter Time Period :: ";
    cin>>t;

    ci = p*pow((1+r/100),t);

    cout<<"\nThe Calculated Compound Interest is = "<<ci<<"\n";

    return 0;
}
