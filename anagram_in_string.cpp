#include <iostream>

using namespace std;

int main()
{
    string s1 = "nightnnnnnnnnnnnnnnnnnnnna";
    string s2 = "thingnnnnnnnnnnnnnnnnnnnna";
    
    for(int i; i<s1.size(); i++)
    {
        for(int j=0; j< s2.size(); j++)
        {
            if(s1[i] == s2[j])  //compare 1st element of string-1 with all elements of string-2 if matched replace it with '0' and break the loop
            {
                s2[j] = 0;      // unmatched element wont be replaced by '0'
                break;
            }
            
        }
    }
  
    int flag;
    for(int j=0; j< s2.size(); j++)
    {
        if(s2[j] == 0)      //if all elements of both the strings match flag =1
        {
            flag =1;
        }
        else
        {
            flag = 0;   //if atleast one elements of both the strings doesnt match flag = 0 i.e its not an anagram
        }
    }
    
    if(flag == 1)
    {
        cout <<"anagram";
    }
    else
    {
        cout<< "no anagram";
    }
    
}
