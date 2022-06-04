#include <bits/stdc++.h>
using namespace std;


void transpose(int **mat, int r, int c)
{
    for(int i=0; i<r; i++)
    {
        int temp=0;
        for(int j=i; j<c; j++)
            swap(mat[i][j], mat[j][i]);
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int **mat;
    int m, n;
    cin>>m>>n;
    mat=new int*[m];
    for(int i=0; i<m; i++)
    {
        mat[i]=new int[n];
        for(int j=0; j<n; j++)
            cin>>mat[i][j];
    }
    transpose(mat, m, n);

    return 0;
}