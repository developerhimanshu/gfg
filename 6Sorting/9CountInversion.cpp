#include <iostream>
using namespace std;
int countandmerge(int*, int , int , int);  //declaration of a function
int countinversion(int arr[], int low, int high)
{
    int res=0;
    if(low<high)
    {
        int mid=low+(high-low)/2;
        res+=countinversion(arr, low, mid);
        res+=countinversion(arr, mid+1, high);
        res+=countandmerge(arr, low, mid, high);
    }
    return res;
}

int countandmerge(int arr[], int low, int mid, int high)
{
    int res=0;
    int n1=mid-low+1, n2=high-mid;
    int left[n1], right[n2];
    for(int i=0;i<n1; i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0; i<n2; i++)
    {
        right[i]=arr[mid+1+i];
    }

    int i=0, j=0, k=low;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j]){arr[k]=left[i];i++;k++;}
        else
        {
            arr[k]=right[j];j++;k++;
            res=res+(n1-i);
        }
    }
    return res;
}
int main()
{
    int arr[]={2, 4, 1, 3, 5};
   cout<<"The inversion pairs in the array are: "<< countinversion(arr, 0, 5);
    return 0;
}