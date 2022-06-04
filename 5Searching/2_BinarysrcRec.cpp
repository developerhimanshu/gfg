//Both Recursive and Iterative approach require log n time but Recursive approach require some more auxilary space because for storing recursive functions in the function call stack 

#include <iostream>
using namespace std;

int bSrcRec(int arr[], int low, int high, int key)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==key)return mid;
    else if(arr[mid]<key)
    {
        return bSrcRec(arr, mid+1, high, key);
    }
    else 
    {
        return bSrcRec(arr, low, mid-1, key);
    }

}
int main()
{
    int arr[]={24, 32, 37, 43, 47, 55};
    cout<<"The key is at the position "<<bSrcRec(arr, 0, 5, 47)+1;

    return 0;
}