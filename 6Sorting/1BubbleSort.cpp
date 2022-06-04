#include <iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void bubblesort(int *arr, int n)  //It's time complexity is O(n^2) and it is a stable sorting algorithm because its equal elements before sorting are at the same place after sorting
{
    bool swapping;
    for(int i=0; i<n-1; i++)
    {
        swapping=0;
        for(int j=0; j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap((arr+j), (arr+j+1));
                swapping=1;
            }
        }
        if(swapping==0)
            break;
    }
}
int main()
{
    int arr[]={12, 5, 32, 4, 1};
    bubblesort(arr, 5);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}