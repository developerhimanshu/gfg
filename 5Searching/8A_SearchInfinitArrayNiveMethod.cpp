#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int key)
{
    int i=0;
    while(true)
    {
        if(arr[i]==key)return i;
        if(arr[i]>key)return -1;        
        i++;
    }

}
int main()
{
    int arr[]={1,2,3, 4, 5, 11, 22, 33 ,44 ,55 ,66,77, 123, 213, 431};
    cout<<search(arr, 10);
    return 0;
}