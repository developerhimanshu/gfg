#include <bits/stdc++.h>
using namespace std;

void printBoundary(int **mat,int r,int c)
{
    if(r==1)
    {
        for(int i=0; i<c; i++)
            cout<<mat[0][i]<<" ";
    }
    else if(c==1)
    {
        for(int i=0; i<r; i++)
            cout<<mat[i][0]<<" ";
    }
    else
    {
        int i;
        for(i=0; i<c; i++)
            cout<<mat[0][i]<<" ";
        for(i=1; i<r; i++)
            cout<<mat[i][c-1]<<" ";
        for(i=c-2; i>=0; i--)
            cout<<mat[r-1][i]<<" ";
        for(i=r-2; i>=1; i--)
            cout<<mat[i][0]<<" ";
    }
}
int main()
{
    int m, n;
    cout<<"Enter the number of row and the column of the matrix: ";
    cin>>m>>n;
    int **matrix;
    matrix=new int*[m];
    for(int i=0; i<m; i++)
    {
        matrix[i]=new int[n];
        for(int j=0; j<n; j++)
            cin>>matrix[i][j];
    }
    cout<<"The boundary elements of above matrix are: ";printBoundary(matrix, m, n);
    return 0;
}