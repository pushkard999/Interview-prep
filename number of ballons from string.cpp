#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char ch[] = "ballonqballon";
    char temp[50];
    int b=0, a=0, l=0, o=0, n=0, j=0;
    
    for(int i=0; i< strlen(ch); i++)
    {

        if(ch[i]=='b')
            b++; 
        else if(ch[i]=='a')
            a++;
        else if(ch[i]=='l')
            l++;
        else if(ch[i]=='o')
            o++;
        else if(ch[i]=='n')
            n++;
                
        else
        {
            temp[j] = ch[i];
            j++;
        }
    }
    

    if(b==a && a==l && a== o && o==n)
    {
        cout<<b;
        
        for(int i=0;i< j; i++)
        {
            cout << temp[i];
        }
        
    }
    else
    {
        cout << 0;
    }
    
}
