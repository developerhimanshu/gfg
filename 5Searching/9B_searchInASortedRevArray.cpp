#include <iostream>  
using namespace std;

int search(int arr[], int x, int n)     //This function will give the element positon in time O(log(n))
{
    int low=0, high=n-1;
    while(low<=high) 
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)return mid;
        if(arr[mid]>arr[low])  //This will check while the sorted array is on left half or on right half
        {
            if(x>=arr[low]&&x<arr[mid])  //this will check whether the element is in the left half or not
                high=mid-1;
            else
                low=mid+1;
        }
        else
        {
            if(arr[high]>=x&&arr[mid]<x) //this will check whether the element is in the right half or not
                low=mid+1;
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[]={10, 20, 32, 43, 3, 4};
    cout<<search(arr, 55, 6);

    return 0;
}