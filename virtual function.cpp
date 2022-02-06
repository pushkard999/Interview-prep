#include<iostream>
using namespace std;

class base
{
    public:
    int temp1=100;
    void push()
    {
        cout << "hello base";
    }
    
    /* virtual void push()  //to understand use of virtual keyword uncomment this function and comment above function
    {
        cout << "hello base";
    }*/
    
};

class derived:public base
{
    public:
    int temp2=200;
    void push()
    {
        cout<<"hello derived";
    }
    
};

int main()
{
    base *bptr;
    base bobj;
    derived dobj;
    
    bptr = &dobj;
    bptr->push();
    
    
}
