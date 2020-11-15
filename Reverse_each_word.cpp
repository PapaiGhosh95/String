/*

Aadil has been provided with a sentence in the form of a string as a function parameter. 
The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".
*/





void reverseEachWord(char str[]) {
    // Write your code here
     int i=0;
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int j=len-1;
 
    i=len-1;
    j=len-1;
    int k=len-1;
    while(i>=-1)
    {   
        if(isspace(str[i]) || i==-1)
        {   k=i;
            i++;
            while(i<j)
            { 
                char temp=str[i];
        		str[i]=str[j];
        		str[j]=temp;
        
        		i++;
        		j--;
                
            }
           k--;
           i=k;
           j=k;
        }
        else
        {
            i--;
        }
        
    }
}
#include <iostream>
#include <cstring>
using namespace std;



int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}