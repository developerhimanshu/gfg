#include <iostream>
#include <cmath>
using namespace std;
int msbnumber(int n)
{
    int expo = log2(n);     //This will calculate the number of the most set bit number
    int res = pow(2, expo); //This will calculate the value of the most set bit value
    return res;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The value of MSB in " << n << " is: " << msbnumber(n) << endl;

    return 0;
}