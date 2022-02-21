#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int prime_num, flag;
    cin >> prime_num;
    cout << sqrt(prime_num) << endl;
    
    for(int i=1; i<=sqrt(prime_num); i++ )
    {
        if(prime_num%i == 0)    //if number is divisible by square root then reminder is zero then its not a prime number
        {
            flag =1;
        }
        else
        {
            flag =0;    // else it is prime number
        }
    }
    
    if(flag==1)
    {
        cout << "not prime";
    }
    else
    {
        cout << "prime";
    }
    
    
}
