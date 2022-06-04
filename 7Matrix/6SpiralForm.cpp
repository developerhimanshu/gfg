#include <bits/stdc++.h>

using namespace std;
void spiralPrint(int** arr, int m, int n)
{
    int top=0, bottom=m-1, left=0, right=n-1;
    while(top<=bottom && left<=right)
    {
        for(int i=left; i<=right; i++)
            cout<<arr[top][i]<<" ";
        top++;
        for(int i=top; i<=bottom; i++)
            cout<<arr[i][right]<<" ";
        right--;
        for(int i=right; i>=left; i--)
            cout<<arr[bottom][i]<<" ";
        bottom--;
        for(int i=bottom; i>=top; i--)
            cout<<arr[i][left]<<" ";
        left++;
    }
}
int main()
{
    int **arr;
    int m, n;
    cin>>m>>n; 
    arr=new int*[m];
    for(int i=0; i<m; i++)
    {
        arr[i]=new int[n];
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<"The spiral form of the matrix is: "<<endl;
    spiralPrint(arr, m, n);
    return 0;
}