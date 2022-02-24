#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int num1=0, num2=1, nexterm=num2+num1;
    if(num == 1)
        cout << num1;
    else if(num == 2)
        cout << num2;
    else if(num == 3)
        cout << num2+num1;
    else
    {
        for(int i=3; i<num; i++)
        {
            num1 = num2;
            num2 = nexterm;
            nexterm = num2+num1;
        }
        cout << nexterm;
    }
        
}
