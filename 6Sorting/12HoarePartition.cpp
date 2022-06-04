2#include <bits/stdc++.h>
using namespace std;

int HoarePartition(int arr[], int l, int h)
{
    int i=l-1, j=h+1;
    int pivot=arr[l]; //In hoare partion we assign pivot with array index 0
    while(true)// This is an infinite loop
    {
        do{ //this will firstly increament the index and then compare with the pivot 
            i++;
        }while(arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        
        if(i>=j)return j; //When we will traverse the array into half that means we have had compare all elements in that array

        swap(arr[i], arr[j]); //When the array elements from left will smaller than pivot and when the array elements from the right will greater than pivot then we will swap those array elements
    }
    return 0;
}
int main()
{
     int arr[]={5,3,8,4,2,7,1,10};
    int low=0;
    int high=sizeof(arr)/sizeof(arr[0]);
    cout<<HoarePartition(arr, low, high-1)<<endl;

    for(auto &d: arr)
    {
        cout<<d<<" ";
    }
    return 0;
}