#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        if (arr[l] < 0)
            l++;
        else if (arr[h] > 0)
        {
            h--;
        }
        else
        {
            int temp = arr[l];
            arr[l] = arr[h];
            arr[h] = temp;
        }
    }
}
int main()
{
    int arr[]={-32, -8, 1, 45, -2};
    sort(arr, 5);
    for(auto & x:arr)
        cout<<x<<" ";
    return 0;
}