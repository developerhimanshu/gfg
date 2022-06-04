#include <iostream>
using namespace std;
int binarysearch(int arr[], int low, int high, int key)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else    
            high=mid-1;
    }
    return -1;

}
int search(int arr[], int x)
{
    if(x==arr[0])return 0;
    int i=1; 
    while(arr[i]<x)
        i=i*2;
    if(arr[i]==x)return i;
    return binarysearch(arr, (i/2)+1,i-1, x);

}
int main()
{

    int arr[]={1,2,3, 4, 5, 11, 22, 33 ,44 ,55 ,66,77, 123, 213, 431};
    cout<<search(arr, 33);
    return 0;
}