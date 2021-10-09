#include<iostream>

using namespace std;

int main()
{   
    int num;
    cout << "enter number";
    cin >> num;
    
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            if(i%2 == 0)
            {
                if(j%2 == 0)
                {
                    cout << "W";
                }
                else
                {
                    cout << "B";
                }
            }
            else
            {
                if(j%2 == 0)
                {
                    cout << "B";
                }
                else
                {
                    cout << "W";
                }
            }
                
        }
          cout << endl;  
    }
        

}
