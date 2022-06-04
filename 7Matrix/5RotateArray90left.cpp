#include <bits/stdc++.h>
using namespace std;

void Rotate(int **mat, int r, int c)
{
    int temp[r][c];
    int k = c - 1;
    int m = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            temp[i][j] = mat[m][k];
            m++;
        }
        k--;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat[i][j] = temp[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int **mat;
    int m, n;
    cin >> m >> n;
    mat = new int *[m];
    for (int i = 0; i < m; i++)
    {
        mat[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    }
    Rotate(mat, m, n);

    return 0;
}