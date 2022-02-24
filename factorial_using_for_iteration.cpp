/****program for factorial
    using for loop and iteration****/
#include <iostream>
using namespace std;
int func_fact(int fact_num)
{
    if(fact_num == 1 || fact_num == 0)
    {
        return 1;
    }
    else
    {
        return ((fact_num)*func_fact(fact_num-1));
    }
}
int main()
{
    int fact_num, fact=1;
    cin >> fact_num;
    cout << func_fact(fact_num) << endl;
    //using for loop
    for(int i=0; i<fact_num; i++)
    {
        fact = fact*(fact_num-i);
    }
    cout << fact;
}
