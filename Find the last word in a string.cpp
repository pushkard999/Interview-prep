#include<iostream>
#include<string.h>

using namespace std;

int main()
{  
    
    char push[100] = "pushkar is good at coding i know ";
    int i=0, size=0;
    char word[50];
    
    while(push[i]!='\0')
    {
        i++;
    }
    while(push[i]!=' ')
    {
        i--;
        word[size]= push[i];
        size++;
    }
    
    for(i=size-1; i>-1; i--)
    {
        cout <<word[i];
    }
    
}
