#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={12, 34, 1, 5, 11};
    int k;
    cout<<"Enter the kth number which you have to find: ";
    cin>>k;
    sort(arr, arr+5);
    cout<<"The "<< k<<"th smallest element is:"<<arr[k-1]<<endl;

}
