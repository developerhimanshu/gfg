#include <iostream>

using namespace std;
int fibbo(int n)
{
    if(n<=1)return n;
    // if(n==0)return 0;
    //  if(n==1)return 1;
    else return fibbo(n-1)+fibbo(n-2);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The fibbonacci number at nth position is: "<<fibbo(n)<<endl;
    return 0;
}