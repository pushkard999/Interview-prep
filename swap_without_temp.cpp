/*****  program to swap numbers withiout temp****/
#include <bits/stdc++.h>
using namespace std;
void swap_withiout_temp(int *ptr_num1, int *ptr_num2)
{
    *ptr_num1 =  *ptr_num1^*ptr_num2;
    *ptr_num2 = *ptr_num1^*ptr_num2;;
    *ptr_num1 = *ptr_num1^*ptr_num2;
    cout << *ptr_num1 << "\t" << *ptr_num2;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    swap_withiout_temp(&num1, &num2);
}
