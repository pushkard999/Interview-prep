#include <iostream>

using namespace std;

int main()
{
    int sum, arr[7] = { 9,1,1,1,1,-1,10};
    sum = arr[0];
    
    for(int i= 0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] == 0)
        {
            sum = 0;
            break;
        }
        else
        {
            sum *=  arr[i+1];  
        }
    }
    
    if(sum == 0)
    {
        cout <<  0;
    }
    else if(sum<0)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }

    return 0;
}
