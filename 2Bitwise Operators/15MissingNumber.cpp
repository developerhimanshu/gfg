#include <iostream>
using namespace std;

int missingnum(int n, int arr[])
{
    int res=0;
    for(int i=1; i<=n+1; i++)
    {
        res=res^i;
    }
    int p=0;
    for(int i=0; i<n; i++)
    {
        p=p^arr[i];
    }
    int q=p^res;
    return q;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[n];
    }
    cout<<missingnum(n, arr);
    return 0;
}