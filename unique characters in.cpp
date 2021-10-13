#include <iostream>

using namespace std;

int main()
{
    string str = "12345";
    bool val= false;
    
    for(unsigned int i = 0; i<str.size(); i++)
    {
        for(int j=i+1; j<str.size(); j++ )
        {
            if(str[i] == str[j])
            {
                val = true;
            }
        }
    }
    
    if(val)
    {
        cout<<"string does not have unique char";
    }
    else
    {
        cout<<"string has unique char";
    }
    
    
    
}
