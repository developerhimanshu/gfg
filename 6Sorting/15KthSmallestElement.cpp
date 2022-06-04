#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)  //Lomuto Partition
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l; j<=h-1; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }   
    }
    swap(arr[i+1], arr[h]);
    return i+1;

}
int kthsmall(int arr[], int l, int h, int k)
{
    while(l<=h)
    {
        int p=partition(arr, l, h);
        if(p==k-1)return arr[p];
        else if(p<k-1)
            l=p+1;
        else
            h=p-1;
    }
    return -1;
}
int main()
{
    int arr[]={12, 45, 2, 34, 1};
    cout<<"The kth smallest number is: "<<kthsmall(arr, 0, 4, 3);
    return 0;
}