//It is the efficient approach and it takes time complexity of O(n) and auxilary space of O(1)
#include <iostream>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    if (i != m)
    {
        while (i < m)
            cout << a[i++] << " ";
    }
    else if (j != n)
    {
        while (j < n)
            cout << b[j++] << " ";
    }
}
int main()
{
    int a[] = {1, 45, 67, 89};
    int b[] = {1, 2, 3, 4, 5};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    merge(a, b, m, n);
    return 0;
}