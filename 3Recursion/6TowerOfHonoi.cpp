#include <iostream>
using namespace std;

void toh(int n, char a, char b, char c)
{
    if(n==1)
    {
        cout<<"Move disk 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    toh(n-1, a, c, b);
    cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1, b, a, c);
}


int main()
{
    toh(3, 'A', 'B', 'C');

    return 0;
}