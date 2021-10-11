//factorial of a number
#include <iostream>

using namespace std;

int factorial(int in_fact){
    
    if(in_fact == 0)
    {
        
        return 1;
    }
    else
    {
        return (in_fact*factorial(in_fact-1));
    }
    
}
int main()
{
    int in_fact;
    cout << "enter number";
    cin >> in_fact;
    
    cout <<"factorial is:" << factorial(in_fact);
        
}
