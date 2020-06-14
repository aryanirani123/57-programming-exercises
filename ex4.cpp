/******************************************************************************
Chapter2 - Input,Processing and Output
Ex4 - Create a simple mad-lib program that prompts fora noun, a verb, an adverb, and
an adjective and injects those into a story that you create.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;
 
int main(){
    
    string noun, verb, adjective, adverb;
    
    cout << "Enter a noun: ";
    cin >> noun;
    
    cout << "Enter a a verb: ";
    cin >> verb;
    
    cout << "Ener an adjective: ";
    cin >> adjective;
    
    cout << "Enter an adverb: ";
    cin >> adverb;
    
    
    cout << "Do you" << " " <<  verb << " your " << adjective << " " << noun << " quickly? Thats hilarious!";
    
    return 0;
}
