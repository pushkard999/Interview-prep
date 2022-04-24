//find number of ballons can be formed from a given string
#include <iostream>
#include <string.h>

using namespace std;

int min(int required, int compare)
{
    if(compare > required)
        return required;
    else
        return compare;
}

int main()
{
    string str = "loonxbaloballpooonn";
    string str_ballon;
    int b=0,a=0,l=0,o=0,n=0;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == 'b')
        {
            b++;
        }
        else if(str[i] == 'a')
        {
            a++;
        }
        else if(str[i] == 'l')
        {
           l++;
        }
        else if( str[i] == 'o')
        {
            o++;
        }
        else if(str[i] == 'n')
        {
            n++;
        }
    }
    
    int arr[5];
    arr[0] = min(2,b);
    arr[1] = min(2,a);
    arr[2] = min(2,l/2);
    arr[3] = min(2,o/2);
    arr[4] = min(2,n);
    
    int mini = arr[0];
    for(int i=1; i<5; i++)
    {
        if(mini>arr[i])
            mini = arr[i];
    }
    
    cout << "ballon found: " << mini;

    return 0;
}
