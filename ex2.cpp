/******************************************************************************
Chapter2 - Input,Processing and Output
Ex1 - Create a program that prompts for an input string and displays output that 
shows the input string and the number of characters the string contains.
Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
 
int main(){
    
    string input;
    cout << "What is the input string? ";
    cin >> input;

    
    int cnt = 0;
    for(int i=0; input[i]; i++){
        	cnt++;
    }
 	
    cout << cnt << endl;
     return 0;
}
