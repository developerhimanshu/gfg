#include <iostream>
using namespace std;

/*
    Count sort gives O(n+k) time complexity.
    Count sort can only work for smaller size k where k is the maximum number till we will storing our value.
    To overcome this problem we use the radix sort.
*/
void countsort(int arr[], int n, int k)
{
    int count[k], output[n];
    for(int i=0; i<k; i++)
        count[i]=0;
    
    for(int i=0; i<n; i++)
        count[arr[i]]++;
    
    for(int i=1; i<n; i++)
        count[i]+=count[i-1];
    
    for(int i=n-1; i>=0; i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=output[i];
    }
}
int main()
{
    int arr[]={1, 3, 4, 2, 1,0};
    countsort(arr, 6, 5);
    for(int x: arr)
        cout<<x<<" ";
    return 0;
}