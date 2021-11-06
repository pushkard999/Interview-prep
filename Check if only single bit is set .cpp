//toggle bit 
#include <iostream>
using namespace std;
int main()
{
 int a=16, i=0, flag=0;
 int b=a;
 while(b!=0)
 {
     if((a&(1<<i)))
     {
         flag++;
         cout <<"flag" <<flag << endl;
     }
     b =b/2;
     i++;
     cout << b << " "<< i << endl;
 }
 if(flag == 1)
    cout <<"extacly 1 bit is set";
 else
    cout <<"more than 1 bits are set";

}
