/**binary search**/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void swap(int *ptr1, int *ptr2)
{
    int *temp;
    *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *temp;
}

int main()
{
    //sort array first
    int i=0, arr[5] = {2,1,30,100,23};
 
    int size = sizeof(arr)/sizeof((arr[0]));
    
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    // for(i=0;i<size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    
    cout << "enter number";
    int num;
    cin >> num;

    // 0 1 2 3 4
    // 1 2 23 30 100 101
    // 0 1 2 3 4 5 6 7 8 9 
    
    int mid_index=(size-1)/2;
    int low=0, high=size-1;
    for(i=0; i<size; i++)
    {
        if(arr[mid_index] == num)
        {
            cout << "found: "<<arr[mid_index];
            break;
        }
        else if(arr[mid_index]>num) //on left
        {
            high = mid_index - 1;
            mid_index = low + ((high-low)/2);
        }
        else    //on right
        {
            low = mid_index+1;
            mid_index = low+((high-low)/2);
        }
    }
}
    

