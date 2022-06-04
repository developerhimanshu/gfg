#include <bits/stdc++.h>
using namespace std;

int subsetsum(int arr[], int n, int sum)
{
    if(n==0)
    {
        return (sum==0)?1:0;
    }
    return subsetsum(arr, n-1, sum)+subsetsum(arr, n-1, sum-arr[n-1]);
}
int main()
{
    int n=3;int sum=30;
    int arr[]={10, 20, 30};
    cout<<subsetsum(arr, n, sum);
    return 0;
}