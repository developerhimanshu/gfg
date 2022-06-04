#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot=arr[l];
    int i=l-1, j=h+1;

    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot);

        do
        {
            j--;
        }while(arr[j]>pivot);

        if(i>=j)    return j;
        swap(arr[i], arr[j]);
    }
    return -1;
}
void qsort(int arr[], int l, int h)
{
    if(l<h)
    {
        int p=partition(arr, l, h);
        qsort(arr, l, p);
        qsort(arr, p+1, h);
    }
}
int main()
{
     int arr[] = {10, 34, 12, 54, 1};
    int l = 0, high = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, l, high - 1);

    for(auto &x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}