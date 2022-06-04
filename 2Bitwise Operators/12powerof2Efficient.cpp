#include <iostream>
using namespace std;
bool powof2(int n)
{
   return (n!=0)&&((n&(n-1))==0);  // =>theta(1) time complexity
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(powof2(n)==1)
        cout<<"Yes, the number is the power of 2"<<endl;
    else
        cout<<"No, the number is not the power of 2"<<endl;
    
    return 0;
}