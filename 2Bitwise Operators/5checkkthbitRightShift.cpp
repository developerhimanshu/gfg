/*
=> Checking weather kth bit is set or not using right shift operatorr
*/
#include <iostream>

using namespace std;
void iskthbitset(int n, int k)
{
    if(((n>>(k-1))&1)==1)
        cout<<"SET";
    else 
        cout<<"NOT SET";
}
int main()
{
    int n, k;   
    cout<<"Enter n and k: ";
    cin>>n>>k;
    iskthbitset(n, k);

    return 0;
}