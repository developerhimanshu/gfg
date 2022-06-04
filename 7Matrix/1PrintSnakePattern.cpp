#include <bits/stdc++.h>
using namespace std;

void printInSnakePattern(vector<vector<int>> arr)
{
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else if(i%2!=0)
        {
            for (int j = (arr[i].size())-1; j >=0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main()
{
    int m, n;
    cout<<"Enter the no. of rows and columns: ";
    cin>>m>>n;
    vector<vector<int>>arr;
    for(int i=0; i<m ; i++)
    {
        vector<int>v;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        arr.push_back(v);
    }
    printInSnakePattern(arr);
    return 0;
}