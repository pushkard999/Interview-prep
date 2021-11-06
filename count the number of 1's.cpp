//toggle bit 
#include <iostream>
using namespace std;
int main()
{
 int n=15,flag=0;

 while(n!=0)
 {
      flag +=1;
      n = n&(n-1);
 }
    cout <<flag;

}
