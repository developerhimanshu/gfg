#include <iostream>
using namespace std;

void insertionSort(int * arr, int n)
{
    for(int i=1; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void arrprint(int * arr, int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
}
int main()
{
    int arr[]={45, 32, 67, 31, 89};
    insertionSort(arr, 5);
    arrprint(arr, 5);

    return 0;
}