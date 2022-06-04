//This is a naive Solution having time complexity of O(m*n) and it can also work for unsorted array
#include <iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    for(int i=0; i<m ;i++)
    {
        if(i>0 && a[i]==a[i-1])
            continue;
        for(int j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}
int main()
{
     int a[]={10, 20, 20, 49, 50};
    int b[]={5, 20, 4, 50};
    intersection(a, b, 5, 4);
    return 0;
}