#include <iostream>  
#include <string.h>

using namespace std;

void reverse_string(char *ptr_name){
    
    int str_len = strlen(ptr_name);
    int str_mid = str_len/2;
    
    for(int i=0, j= str_len-1; i<str_mid; j--, i++)   // for loop should execute till half of string
    {
        char temp = ptr_name[i];
        ptr_name[i] = ptr_name[j];
        ptr_name[j] = temp;
    }
    
    cout << ptr_name; // reversed output string
}

int main()
{
    char name[8] ="pushkar";  //input string
   
    reverse_string(name);

    return 0;
}
