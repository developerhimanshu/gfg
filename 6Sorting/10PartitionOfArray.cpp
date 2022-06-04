#include <bits/stdc++.h>
using namespace std;

int partitionOfTheArray(int arr[], int l, int h ,int p)  //The return type of the function is integer because we have to return the index after shifting the pivot 
{
    int temp[h-l+1];
    int index=0;
    for(int i=l; i<=h; i++)
    {
        if(arr[i]<arr[p]){temp[index]=arr[i];index++;}
    }
    for(int i=l; i<=h; i++)
    {
        if(arr[i]==arr[p]){temp[index]=arr[i]; index++;}
    }
    int res=l+index-1;
    for(int i=l; i<=h;i++)
    {
        if(arr[i]>arr[p]){temp[index]=arr[i]; index++;}
    }
    for(int i=l; i<=h; i++)
    {
        arr[i]=temp[i-l];
    }
    return res;
}

int main()
{
    int arr[]={12, 34, 1, 67, 43, 13};
    partitionOfTheArray(arr, 0, 5, 0);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}