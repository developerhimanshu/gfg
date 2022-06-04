#include <bits/stdc++.h>
using namespace std;
int firstocc(int arr[], int low, int high, int key)
{
    if(low>high)return -1;
    int mid=(low+high)/2;
    if(arr[mid]>key)
    {
        return firstocc(arr, low, mid-1, key);
    }
    else if(arr[mid]<key)
        return firstocc(arr, mid+1, high, key);
    else
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else 
            return firstocc(arr, low, mid-1, key);
    }
}
int main()
{
int arr[]={11, 11,23, 45, 32};
cout<<firstocc(arr, 0, 5, 32);

return 0;
}
