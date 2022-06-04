#include <iostream>
using namespace std;
int search(int arr[], int x, int n)//The time complexity of this solution is O(n)
{
    for(int i=0;i<n; i++)    
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
}
int main()
{
    int arr[]={10, 20, 32, 43, 3, 4};
    cout<<search(arr, 4, 6);

    return 0;
}