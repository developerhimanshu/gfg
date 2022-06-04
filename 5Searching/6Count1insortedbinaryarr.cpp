#include <bits/stdc++.h>
using namespace std;


int countocc(int arr[], int n)
{
    int low=0;
    int high=n-1;
    if(arr[n-1]==1)return n;
    if(arr[0]==0)return 0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)
            high=mid-1;
        else
        {
            if(arr[mid+1]==0) 
                return (mid+1);
            else 
                low=mid+1;
        }
    }
    return 0;
}
int main()
{
    int arr[]={1, 1,1, 1, 0, 0, 0,0};
    cout<<countocc(arr, 8);
    return 0;
}