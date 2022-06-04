//This is a naive method and it takes O(m+n * log(m+n)) and it takes the auxilary space of O(m+n)

#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int c[m+n];
    for(int i=0; i<m; i++)
    {
        c[i]=a[i];
    }
    for(int i=0; i<n; i++)
    {
        c[m+i]=b[i];
    }
    sort(c, c+m+n);

    for(int i=0; i<m+n; i++)
    {
        cout<<c[i]<<" ";
    }
}
int main()
{
    int a[]={10, 12, 14, 15, 20};
    int b[]={1,2, 3, 4, 5};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    merge(a, b, m, n);
    return 0;
}
