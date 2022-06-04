#include <iostream>

using namespace std;
int oddoccurence(int *arr, int n)
{
    int res = 0;
    for(int i=0; i<n; i++)
    {
        res=res^arr[i];
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int arr[n];
    return 0;
}