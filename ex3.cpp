/******************************************************************************
Chapter2 - Input,Processing and Output
Ex1 - Create a program that prompts for a quote and an author. Display 
the quotation and author as shown in the example output.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;
 
int main(){
    
    string quote, writer;
    
    cout << "What is the quote? ";
    cin >> quote;
    
    cout << "Who said the quote? ";
    cin >> writer;
 
    cout << writer << " says," << quote;
    return 0;
    

}
