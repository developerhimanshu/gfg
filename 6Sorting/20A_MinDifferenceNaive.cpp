#include <bits/stdc++.h>
using namespace std;

int minDifference(int arr[], int n)
{
    int res=INT_MAX;
    for(int i=1; i<n; i++)  // This code will have the time complexity of O(n^2).
    {
        for(int j=0; j<i; j++)
        {
            res=min(res, abs(arr[i]-arr[j]));
        }
    }
    return res;
}
int main()
{
    int arr[]={12, 34, 1, 6, 13};
    cout<<minDifference(arr, 5)<<endl;

    return 0;
}