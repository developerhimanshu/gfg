#include <bits/stdc++.h>
using namespace std;

int lomutopartition(int arr[], int l, int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l; j<=h-1; j++)
    {
        if(arr[j]<pivot) //This swapping is because the element less then pivot will be before the pivot and the elements greater than pivot will be after the pivot
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}
int main()
{
     int arr[]={10,80,30,90,40,50,70};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	lomutopartition(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
    return 0;
}