#include <iostream>

using namespace std;

int main()
{
    int var =10;
    int *ptr;
    int **ptr_ptr;
    
    ptr = &var;
    ptr_ptr = &ptr;
    
    cout <<"var value            " << var << endl;
    cout <<"address var          " << &var << endl;
    cout <<"value of var         " << *ptr << endl;
    cout <<"address of var       " << ptr << endl;
    cout <<"address of ptr       " << &ptr << endl;
    cout <<"value of var         " << **ptr_ptr << endl;
    cout <<"address of ptr       " << ptr_ptr << endl;
    cout <<"address of ptr_ptr   " << &ptr_ptr << endl;
    cout <<"address of ptr only  " << *ptr_ptr << endl;
  
}
var value            10
address var          0x7fff067be914
value of var         10
address of var       0x7fff067be914
address of ptr       0x7fff067be918
value of var         10
address of ptr       0x7fff067be918
address of ptr_ptr   0x7fff067be920
address of ptr only  0x7fff067be914
