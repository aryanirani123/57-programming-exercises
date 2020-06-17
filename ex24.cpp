/******************************************************************************
Chapter5 - Functions
Ex24 - Create a program that compares two strings and determines if the two strings
are anagrams. The program should prompt for both input strings and display the output.

Author: Aryan Irani(aryanirani123@gmail.com)
*******************************************************************************/

#include <iostream>
using namespace std;
int anagram(char str1[], char str2[])
{
    int i, flag = 0,  x[26] = {0}, y[26] = {0};
    for(i = 0; str1[i] != '\0'; i++)
        x[str1[i] - 'a']++;
    for(i = 0; str2[i] != '\0'; i++)
        y[str2[i] - 'a']++;
    for (i = 0; i < 26; i++)
    {
        if (x[i] != y[i])
            flag = 1; 
    }
    if (flag == 1)
        cout << "Entered strings are not anagrams.";
    else
        cout << "Entered strings are anagrams.";
}
 
int main ()
{
    char str1[50], str2[50];
    int flag;
    cout << "Enter string 1 : ";
    gets(str1);
    cout << "Enter string 2 : ";
    gets(str2);
    anagram(str1, str2);
    return 0;
}
