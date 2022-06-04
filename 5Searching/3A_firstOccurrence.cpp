#include <bits/stdc++.h>
using namespace std; 

int firstocc(int arr[],int n, int key)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>key)
        {
            high=mid-1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
         if(mid==0||arr[mid-1]!=arr[mid])
         {
             return mid;
         }   
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
    int n=7;
    int arr[]={12, 15, 15, 24, 29, 32, 40};
    cout<<firstocc(arr, n, 15);

    return 0;
}