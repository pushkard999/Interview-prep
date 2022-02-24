/****  program for gratest of 10 numbers****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int greatest_arr[10] = {10,20,9,15,11,100,45,50,49,101};
    int max = greatest_arr[0];
    for(int i=1; i<10; i++)
    {
        if(max<greatest_arr[i])
        {
            max = greatest_arr[i];
        }
    }
    cout <<"max number is:" <<max;
    
}
