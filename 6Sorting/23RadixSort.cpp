#include <iostream>
#include <climits>
using namespace std;
void countsort(int*, int, int);
void radixsort(int arr[], int n)
{
    int max=INT_MIN;
    for(int i=0; i<n; i++)
        if(arr[i]>max)max=arr[i];
    for(int exp=1; max/exp>0; exp=exp*10)
    {
        countsort(arr, n, exp);
    }

}

void countsort(int arr[], int n, int exp)
{
    int k=10;
    int count[k], output[n];
    for(int i=0; i<k; i++)
        count[i]=0;
    
    for(int i=0; i<n; i++)
        count[(arr[i]/exp)%10]++;
    
    for(int i=1; i<10; i++)
        count[i]+=count[i-1];
    
    for(int i=n-1; i>=0; i--)
    {
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=output[i];
    }
}
int main()
{
    int arr[] = { 319,212,6,8,100,50 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    radixsort(arr, n); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    return 0;
}