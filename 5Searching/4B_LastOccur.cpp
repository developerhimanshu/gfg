#include <iostream>
using namespace std;

int lastocc(int arr[], int low, int high, int key, int n)
{
    if(low>high)return -1;
    int mid=(low+high)/2;
    if(arr[mid]>key)return lastocc(arr, low, mid-1, key, n);
    else if(arr[mid]<key)return lastocc(arr, mid+1, high, key, n);
    else{
        if(mid==n-1||arr[mid]!=arr[mid+1])return mid;
        else return lastocc(arr, mid+1, high, key, n);
    }
}
int main()
{
    int arr[]={10, 15, 20, 20, 40, 40};
    cout<<lastocc(arr, 0, 5, 15, 6); 

    return 0;
}