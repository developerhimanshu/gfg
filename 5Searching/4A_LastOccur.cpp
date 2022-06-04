#include <iostream>
using namespace std;

int lastocc(int arr[], int n, int key)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>key)
        {
            high=mid-1;
        }
        else if(arr[mid]<key)low=mid+1;
        else
        {
            if(mid==n-1||arr[mid]!=arr[mid+1])
                return mid;
            else
                low=mid+1;
        }
    }
    return -1;

}
int main()
{
    int arr[]={10, 15, 20, 20, 40, 40};
    cout<<lastocc(arr, 6, 20);

    return 0;
}