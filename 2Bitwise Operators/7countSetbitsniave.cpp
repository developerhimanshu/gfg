#include <iostream>

using namespace std;
int noOsetbits(int n)
{
    int res=0;
    while(n>0)
    {
        if(n%2!=0)
            res++;
        n=n/2;
    }
    return res;
}
int main()
{
    cout<<noOsetbits(5)<<endl;
    cout<<noOsetbits(7)<<endl;
    cout<<noOsetbits(13)<<endl;
    return 0;
}