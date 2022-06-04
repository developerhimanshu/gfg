#include <iostream>
using namespace std;


void cycleSort(int arr[], int n)
{
    for(int cs=0; cs<n-1; cs++)
    {
        int item;
        item=arr[cs];
        int pos=cs;
        for(int i=cs+1; i<n; i++)              //10 2 45 7 8        
        {
            if(arr[i]<item)
                pos++;
        }
        swap(item, arr[pos]);

        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1; i<n; i++)
            {
                if(arr[i]<item)
                    pos++;
            }
            swap(item, arr[pos]);
        }
    }
}
int main()
{
    int arr[]={12, 1,2, 43, 5, 43,1,9};
    cycleSort(arr, 8);
    for(auto &x: arr)
        cout<<x<<" ";

    return 0;
}