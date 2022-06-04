#include <bits/stdc++.h>
using namespace std;

int countSmallerthanEqualToMid(vector<int>&row, int mid)
{
    int l=0, h=row.size()-1;
    while(l<=h)
    {
        int md=(l+h)>>1;
        if(row[md]<=mid)
            l=md+1;
        else    
            h=md-1;
    }
    return l;
}
int findMedian(vector<vector<int>>&mat)
{
    int r=mat.size(), c=mat[0].size();
    int low=mat[0][0], high=mat[0][c-1];
    for(int i=0; i<r; i++)
        low=min(low, mat[i][0]);
    for(int i=0; i<r; i++)
        high=max(high, mat[i][c-1]);
    while(low<=high)
    {
        int mid=(low+high)>>1;
        int cnt=0;
        for(int i=0; i<c; i++)
            cnt+=countSmallerthanEqualToMid(mat[i], mid);
    if(cnt<=(r*c)/2)low=mid+1;
    else high=mid-1;
    }
    return low;
  
}

int main()
{
    vector<vector<int>>v;
    int m; int n;
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        vector<int>v1;
        for(int j=0; j<n; j++)
        {
            int x;cin>>x;
            v1.push_back(x);
        }
        v.push_back(v1);
    }
	cout << "Median is " << findMedian(v) << endl;
    return 0;
}