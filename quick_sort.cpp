//program for quick short
#include <iostream>
using namespace std;
int arr[5] = {2,1,5,4,0};

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int traversing(int first, int last)
{
    int pivot = arr[first];
    int i = first;
    int j = last;
    
    while(i<j)
    {
        do{
            i++;
        }while(arr[i] <= pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i< j )
        {
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[first], &arr[j]);
    return j;
}

void quick_sort(int first, int last)
{
    if(first < last)
    {
       int j = traversing(first, last);
       quick_sort(first, j);
       quick_sort(j+1, last);
    }
}

int main()
{
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    
    int first = 0;
    int last = size_arr;
    quick_sort(first, last);
    
    for(int i=0; i<size_arr; i++)
    {
        cout << arr[i] << " ";
    }
}
