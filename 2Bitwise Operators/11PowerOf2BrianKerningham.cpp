#include <iostream>

using namespace std;

bool powerof2(int n)
{   
    int count=0;
    while (n > 0)
    {
        n=(n & (n - 1)); // Brian Kerninghan's Algorithm : count the number of set bits if the count is 1 then it is the power of 2
        count++;
    }
    if(count==1)
        return 1;
    else
        return 0;
}

int main()
{
    int n, t;
    cout << "Enter the no. of test cases: ";
    cin >> t;
    while (t--)
    {
        cout << "Enter the number which you have to check:";
        cin >> n;
        if (powerof2(n) == 1)
            cout << "Yes it is the power of 2" << endl;
        else
            cout << "No it is not the power of 2" << endl;
    }
    return 0;
}