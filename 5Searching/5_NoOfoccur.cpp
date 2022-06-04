#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > key)
            high = mid - 1;
        else if (arr[mid] < key)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int lastocc(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > key)
            high = mid - 1;
        else if (arr[mid] < key)
            low = mid + 1;
        else
        {
            if (mid == n-1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low= mid +1;
        }
    }
    return -1;
}

int countocc(int arr[], int n, int key)
{
    int first=firstocc(arr, n, key);
    if(first==-1)return 0;
    else
        return (lastocc(arr, n, key)-first+1);  
}
int main()
{
    int arr[]={10, 15, 15, 15, 20};
    cout<<countocc(arr, 5, 15);
    return 0;
}