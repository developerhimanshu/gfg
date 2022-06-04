#include <iostream>

using namespace std;
bool Powof2(int n)
{
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return 0;
            break;
        }
        n = n / 2;
    }
    return 1;
}
int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the number which you want to check: ";
        cin >> n;
        if (Powof2(n))
        {
            cout << "Yes, it is the power of 2" << endl;
        }
        else
        {
            cout << "No, it's not the power of 2" << endl;
        }
    }
    return 0;
}