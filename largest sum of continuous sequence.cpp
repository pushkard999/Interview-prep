#include<iostream>

using namespace std;

int main()
{   
   int i=0, arr[7] = {-1,2,3,4,-5,-8,-9};
   int max_ending_here = 0, max_so_far=0;
   
  
  // 
   for(i=0; i< sizeof(arr)/sizeof(int); i++)
   {
       max_ending_here = max_ending_here + arr[i];
       
       if(max_so_far < max_ending_here) // max_so_far gets updated only when the value of max_ending_here gets larger value
       {
           max_so_far = max_ending_here;
       }
       if(max_ending_here < 0)
       {
           max_ending_here = 0;
       }
   }
   cout << max_so_far;
   
}
