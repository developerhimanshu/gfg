#include <bits/stdc++.h>
using namespace std;

int squareroot(int n)
{
    int low=1, high=n, ans;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int mysq=mid*mid;
        if(mysq==n)
        {
            return mid;
        }
        else if(mysq>n)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main()
{
    cout<<squareroot(5);
    return 0;
}