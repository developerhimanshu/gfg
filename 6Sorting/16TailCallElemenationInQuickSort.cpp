#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)//hoare's partition
{
    int i=l-1, j=h+1;
    int pivot=arr[l];
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i], arr[j]);
    }
    return -1;
}
//This tail call elemination will save memory in the function call stack

void quicksort(int arr[], int l, int h)
{
    begin:
    while(l<h)
    {
        int p=partition(arr, l, h);
        quicksort(arr, l, p);
        l=p+1;
        goto begin;
    }
}
int main()
{
    int arr[]={12, 32, 3, 56, 12};
    quicksort(arr, 0, 4);
    for(auto & x: arr)
        cout<<x<<" ";
    return 0;
}