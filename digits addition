//given an integer x, find the integers less than or equal to X whose digits adds up to Y
// eg. if x=20, y=5 -> 05=5, 14=5 such combinations
#include<iostream>
using namespace std;

int main()
{  
    int n,sum=0, numX = 100, numY=9; 
    
    for(int i=1; i<=numX; i++)
    {
        n=i;
        while(n>0)  //gives addition of digits of a particular number
        {
            sum = sum + n%10;
            n=n/10;
            
        } 
        if( numY == sum)
        {
            cout << i << " "; //prints such combination
        }
        sum =0;   //set sum back to zero so as clear it 
    }
}
