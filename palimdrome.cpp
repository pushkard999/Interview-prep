/** program for palindrom **/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abaaba";
    int flag=0;
    
    for(int i=0, j=str.size()-1; i<str.size()/2;i++, j--)
    {
        if(str[i] == str[j])
        {
            flag = 1;
        }
    }
    
    if(flag==1)
        cout <<"palindrom";
    else
        cout << "not";
}
