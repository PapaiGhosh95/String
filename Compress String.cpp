/*
Write a program to do basic string compression. For a character which is consecutively repeated more than once, 
replace consecutive duplicate occurrences with the count of repetitions.

Exmple:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
The string is compressed only when the repeated character count is more than 1.

Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa


*/


void stringCompression(char input[]) {
    // Write your code here
    int len=0;
    string st="";
    while(input[len]!='\0')
        len++;
    int i=0;
    int j=0;
    int count=0;
    while(j<len)
    {
        if(input[i]==input[j])
        {
            count++;
            j++;
        }
        else 
        {
          if(count>1)
          {
              st+=input[i]+to_string(count);
          }
        else
            {
                st+=input[i];
            }
            count=1;
            i=j;
            j++;
        }
        if(j==len)
        {
            st+=input[i]+to_string(count);
            break;
        }
       
        
    }
     for(int i=0;i<len;i++)
     {
         input[i]=st[i];
     }
    
    
}
#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    stringCompression(str);
    cout << str;
}
