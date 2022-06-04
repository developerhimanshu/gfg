//Here we are given the number of students m, the number of packets n and the number of chocolates inside the packets i.e. arr[i] now we have to minimize the difference between the student get most no. of chocolates and the students get least number of chocolates

#include <iostream>
#include <algorithm>
using namespace std;

int minDifference(int arr[], int n, int m)
{
    sort(arr, arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=1; i+m-1<n; i++)
    {
        res=min(res, arr[i+m-1]-arr[i]);
    }
    return res;
}
int main()
{
    int arr[]={3,4,1,9,56, 7, 9,12};
    cout<<minDifference(arr, 8, 5)<<endl;
    
    return 0;
}