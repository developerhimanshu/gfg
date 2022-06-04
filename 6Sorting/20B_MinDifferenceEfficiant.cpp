#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int MinDifference(int arr[], int n)
{
    int res=INT_MAX;
        sort(arr, arr+n);

    for(int i=1; i<n; i++)
    {
        res=min(res, (arr[i]-arr[i-1]));
    }
    return res;
}
int main()
{
    int arr[]={13, 43, 11, 65, 1};
    cout<<MinDifference(arr,5 )<<endl;
    return 0;
}