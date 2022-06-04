#include <iostream>

using namespace std;
void checkkthbit(int n, int k)
{
    if((n&(1<<(k-1)))!=0)
        cout<<"Set";
    else
        cout<<"Not set";

}
int main()
{
    int n, k;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the bit's number: ";
    cin>>k;
    checkkthbit(n, k);

    return 0;
}