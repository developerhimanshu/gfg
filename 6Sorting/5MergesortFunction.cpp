//This merge sort function has time complexity of O(n) and auxilary space of O(n)
//Here we are sending a low, high and mid to the function and making two arrays left and right according to it then we store the sorted elements of that arrays in the original array 

#include <iostream>
using namespace std;

void mergesort(int arr[], int low, int mid, int high)
{
    int n1=mid-low+1; 
    int n2=high-mid;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0; i<n2; i++)
    {
        right[i]=arr[mid+1+i];
    }
    int i=0, j=0, k=low;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++, k++;
        }
        else
        {
            arr[k]=right[j];
            j++, k++;
        }
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++, k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++, k++;
    }
}
int main()
{
    int arr[]={12, 45, 65, 12, 32};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, 2, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}