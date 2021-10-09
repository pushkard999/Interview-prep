#include <iostream>  
#include <string.h>
using namespace std;

void reverse_string(char *ptr_name, int str_len){   //function to reverse string
    
    int str_mid = str_len/2;

    for(int i=0, j= str_len-1; i<str_mid; j--, i++) 
    {
        char temp = ptr_name[i];
        ptr_name[i] = ptr_name[j];
        ptr_name[j] = temp;
    }
}

int main()
{
    char name[50] ="pushkar is good";
                  //pushkar123456, 7, is=89, 10, good=11 12 13 14
                  
                  //logic is 1st reverse the indiviual word eg.rakhsup si doog
                  //then reverse the whole string
   
    int j = 0, str_len = strlen(ptr_name);

    for(int i=0; i<str_len+1; i++) 
    {
        if(*(ptr_name+i) == ' ' || *(ptr_name+i) =='\0' )   //to get space and last null character from string
        {
            reverse_string(ptr_name+j, i-j);   //i-j gives length of the string if i=7, j=0 length=8
            j = i+1;    // to get length of next word
        }
    }
    //after this loop o/p will be- rakhsup si doog
    reverse_string(ptr_name, str_len);
 
    cout << ptr_name;   //prints the final o/p will be- good is pushkar

    return 0;
}
