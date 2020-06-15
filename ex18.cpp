/******************************************************************************
Chapter4 - Makaing decisions
Ex18 -  Create a program that converts temperatures from Fahren- heit to Celsius or 
from Celsius to Fahrenheit. P/rompt for the starting temperature. The program should 
prompt for the type of conversion and then perform the conversion.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include<iostream>
using namespace std;

int main()
{
   float fahr, cel;
   char option;

   cout << "Choose from following option:";
   cout << "1. Celsius to Fahrenheit." ;
   cout << "2. Fahrenheit to Celsius." ;
   cin >> option;

  
   if (option == '1')
   {
      cout << "Enter the temperature in Celsius:";
      cin >> cel;

      fahr = (1.8 * cel) + 32.0; 
      cout << "\nTemperature in degree Fahrenheit: " << fahr << " F";
   }
  
   else if (option == '2')
   {
      cout << "Enter the temperature in Fahrenheit: ";
      cin >> fahr;

      cel = (fahr - 32) / 1.8; 
      cout << "\nTemperature in degree Celsius: " << cel << " C";
   }
   else
      cout << "Error Wrong Input." << endl;

   return 0;
}
    
    
  
