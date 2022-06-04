/*
=> Finding no of set bits using Brian Kerninghan's Algorithm 
time complexity= theta(no of set bits)
*/
#include <iostream>

using namespace std;
int noOSetBits(int n)
{
    int res=0;
    while(n>0)
    {
        n=n&(n-1);
        res++;
    }
    return res;
}
int main()
{
    cout<<noOSetBits(7)<<endl;
    cout<<noOSetBits(31)<<endl;

    return 0;
      
}