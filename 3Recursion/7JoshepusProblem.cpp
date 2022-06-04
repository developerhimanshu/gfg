#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if(n==1)
        return 0;
    return (jos(n-1, k)+k)%n;  //This is when the counting is starting from 0
    // return ((jos(n-1, k)+k-1)%n+1);//This is when the counting is starting from 1
}
int main()
{
    cout<<jos(4, 2);
    return 0;
}