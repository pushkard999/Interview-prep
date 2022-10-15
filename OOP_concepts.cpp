#include <iostream>

using namespace std;

class polymorphism
{
    public:
    
    void addition(int var1, int var2)
    {
        cout << "in poly: "<< var1+var2;
    }
};

class inheritance_base
{
    public:
    int temp1 = 50, temp2 = 40;
    void in_base_class()
    {
        cout << endl <<"In base class" << endl;
    }
};

class inheritance_child : public inheritance_base
{
    public:
    void in_child_class()
    {
        cout << "In child class: "<< temp1 + temp2 << endl;
    }
};

class encapsulation
{
    private:
    int var1;
    public:
    encapsulation()
    {
        cout << "in encapsulation class: ";
    }
    void in_encap(int a)
    {
        var1 = a;
    }
    int return_value()
    {
        return var1;
    }
};

class abstraction
{
    private:
    int temp1, temp2;
    public:
    void in_abstraction(int a, int b)
    {
        temp1 = a;
        temp2 = b;
        temp1 += temp2;
        cout << endl <<"in abstraction: " << temp1;
    }
};

int main()
{
    polymorphism poly;
    poly.addition(10,20);
    
    inheritance_base in_base;
    in_base.in_base_class();
    
    inheritance_child in_child;
    in_child.in_child_class();
    
    encapsulation encap;
    encap.in_encap(30);
    cout << "value of encap: "<< encap.return_value();
    
    
    abstraction abst;
    abst.in_abstraction(11,22);
    // cout<<"Hello World";

    return 0;
}
