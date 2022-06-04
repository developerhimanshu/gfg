#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>mat, int k)
{
    int rp=0, cp=(mat.size())-1;
    while(rp<mat.size()&&cp>=0)
    {
        if(mat[rp][cp]==k)
        {
            cout<<"Number found at: "<< rp<<" "<<cp<<endl;
            return;
        }
        else if(mat[rp][cp]>k)
        {
            cp--;
        }
        else
            rp++;
    }
    cout<<"Not found"<<endl;
}
int main()
{
    vector<vector<int>>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int>v1;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            v1.push_back(x);
        }
        v.push_back(v1);
    }
    int k;
    cout<<"Enter the number to be searched: ";
    cin>>k;
    search(v, k);

    return 0;
}