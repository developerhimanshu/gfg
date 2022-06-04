//Note the array in binary search must be in sorted way
#include <iostream>

using namespace std;

int binary_Search(int arr[], int n, int key)
{
    int low=0, high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(key>arr[mid])
            low=mid+1;
        else if(key<arr[mid])
            high=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={10, 25, 35, 37, 46, 98};
    int key=37;

    cout<<"The key is at "<<binary_Search(arr, 6, key)+1<<" position"<<endl;

    return 0;
}