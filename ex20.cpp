/******************************************************************************
Chapter4 - Makaing decisions
Ex20 - Create a tax calculator that handles multiple states and multiple counties within each state. 
The program prompts the user for the order amount and the state where the order will be shipped.

For Wisconsin residents, prompt for the county of residence.

• ForEauClairecountyresidents,addanadditional0.005 tax.
• ForDunncountyresidents,addanadditional0.004tax.

Illinois residents must be charged 8% sales tax with no additional county-level charge. 
All other states are not charged tax. The program then displays the tax and the total 
for Wisconsin and Illinois residents but just the total for everyone else.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include<iostream>
using namespace std;
 
int main(){
    
    int amount;
    string state, state1,  state2;
    
    cout << "What is the order amount: ";
    cin >> amount;
    
    cout << "Whats state do you live in: ";
    cin >> state;
    
    state1 = "Wisconsin";
    state2 = "Illinois";
    
    if(state == state1){
        
        float tax1 = 5 * amount/100;
        cout << "The tax is " << tax1 << "\n";
        float final_amount = amount + tax1;
        cout << "The total is " << final_amount;
        
    }
    else {
        
         float tax2 = 8 * amount/100;
        cout << "The tax is " << tax2 << "\n";
        float final_amount = amount + tax2;
        cout << "The total is " << final_amount;
    }
}
