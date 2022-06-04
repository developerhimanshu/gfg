#include <iostream>
using namespace std;
void sort3typ(int arr[], int n)
{
    int lo=0, hi=n-1, mid=0;

    while(mid<=hi)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid], arr[lo]);
            lo++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid], arr[hi]);
            hi--;
        }
    }
}
int main()
{
    int arr[]={1, 2, 0, 1, 2, 0};
    sort3typ(arr, 6);
    for(auto &x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}