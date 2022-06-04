#include <bits/stdc++.h>
using namespace std;

void selectionSort(int * arr, int n)
{
    for(int i=0; i<n; i++)
    {
        int min_ind=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_ind])
                min_ind=j;
        }
        swap(arr[i], arr[min_ind]);
    }
}
int main()
{
    int arr[]={10, 78, 43, 12, 42};
    selectionSort(arr, 5);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}