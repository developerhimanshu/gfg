//This Solution has a time complexity of O(m+n)
#include <iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    int i=0, j=0;
    while(i<m&&j<n)
    {
        if(i>0&&a[i]==a[i-1]){i++; continue;}
        if(a[i]<b[j]){i++;}
        else if(a[i]>b[j]){j++;}
        else
        {
            cout<<a[i]<<" ";
            i++, j++;
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