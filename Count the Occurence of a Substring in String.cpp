#include<iostream>
#include<string.h>
using namespace std;

void occurance(char *str1, char *in_str1, int *len_str1)
{
    int occ=0;
 
    for(int i=0; i<(*len_str1); i++)
    {
        if(*in_str1 == *(str1+i))
        {
            if(*(in_str1+1) == *(str1+i+1))
            {
                occ++;
            }
        }
    }
    
    if(occ>0)
    {
        cout << "string occurs " << occ << " times";
    }
    else
    {
        cout << "no occurance";
    }
}

int main()
{
    char str[]="pushkar deodhar";
    int len_str = strlen(str);
    char in_str[] = "ab";

    occurance(str, in_str, &len_str);
    
}
