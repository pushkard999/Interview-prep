//program to remove duplicate from string
#include <bits/stdc++.h>
using namespace std;
void duplicate_removal(char *ptr_str, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++ )
        {
            if(ptr_str[i] == ptr_str[j])
            {
                ptr_str[j] = j;
                
            }
        }
          
    }
    
    for(int i=0; i<=size; i++)
    {
        if(ptr_str[i] == i)
        {
            
        }
        else
            cout << ptr_str[i];
    }
    
    
}

int main()
{
    char str[] = "aabbcdaaaaaaaaaaaabdbdbbebebgg";
    int size=0;
   
   while(str[size]!='\0')
   {
       size++;
   }
   duplicate_removal(str, size);
}
