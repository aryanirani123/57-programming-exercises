/******************************************************************************
Chapter4 - Makaing decisions
Ex23 - Create a program that walks the user through troubleshoot- ing issues with a 
car. Use the following decision tree to build the system:

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include<iostream>
using namespace std;
 
int main(){
    
    string input, input1, input2;
    
    cout << "Is the car silent when you turn the key?";
    cin >> input;
    
    input1 = "Yes";
    input2 = "No";
    
    if(input == input1){
        
        cout << "Are the battery terminals corroded? ";
        cin >> input;
        
        if(input == input1){
            
            cout << "Clean terminals and try starting again";
        }
        
        else {
            cout << "Replace cables and try again";
            }
    }
    else if(input == input2){
        
        cout << "Does the car make a clicking noise?";
        cin >> input;
        
        if(input == input1){
            
            cout << "Replace the battery";
        }
        
        else if(input == input2){
            
            cout << "Does the car crank up but fail to start?";
            cin >> input;
            
            if(input == input1){
                
                cout << "Check spark plug connections";
                
            }
        }
            else if (input == input2){
                
                cout << "Does the engine start and then die?";
                cin >> input;
                
            }
            if(input == input1){
                
            cout << "Does your car have fuel injection?";
            cin >> input;
            
            }
            
            else if(input == input1){
                
                cout << "Get it in for service";
            }
            
            else {
                cout << " Check to ensure the choke is opening and closing";
            }
        }
        
        
        
        
    }    
        
        
        
