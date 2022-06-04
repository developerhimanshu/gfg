#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>v;
	int n1, n2;
	cout<<"Enter the size of rows and columns: ";
	cin>>n1>>n2;
	for(int i=0; i<n1; i++)
	{
		vector<int>v1;
		for(int j=0; j<n2; j++)
		{
			int x;
			cin>>x;
			v1.push_back(x);
		}
		v.push_back(v1);
	}
	for(vector<int>p: v)
	{
		for(int i=0; i<p.size(); i++)
			cout<<p[i]<<" ";
		cout<<endl;
	}
    return 0;
}