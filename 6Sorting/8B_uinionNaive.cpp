#include <iostream>
#include <algorithm>
using namespace std;

//This function will take the time complexity of O(m+n*log(m+n))
void unionArrays(int a[], int b[], int m, int n)
{
    int c[m+n];
    for(int i=0; i<m; i++)
        c[i]=a[i];
    for (int i = 0; i < n; i++)
    {
        c[m+i]=b[i];
    }
    /*
    -> we are copying the elements of array a and b to array c
    -> Then we are sorting array c
    -> Then we are removing duplicates from array c
    */
    sort(c, c+m+n);

//  This function is for printing non-duplicates from an array
    for(int i=0; i<m+n; i++)
    {
        if(i==0||c[i]!=c[i-1])
            cout<<c[i]<<" ";
    }
}
int main()
{
    int a[]={1, 1, 4, 5, 6, 12};
    int b[]={1, 5, 7, 12, 67};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    unionArrays(a, b, m, n);
    return 0;
}