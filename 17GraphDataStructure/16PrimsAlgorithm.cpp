#include <bits/stdc++.h>
#define V 4
using namespace std;

int primsMST(int graph[V][V])
{
    int key[V];
    int res=0;
    fill(key, key+V, INT_MAX);
    key[0]=0;
    bool mset[V]={false};
    for(int count=0; count<V; count++)
    {
        int u=-1;
        for(int i=0; i<V; i++)
        {
            if(!mset[i]&&(u==-1||key[i]<key[u]))
                u=i;
        }
        mset[u]=true;
        res+=key[u];
        for(int v=0; v<V; v++)
        {   
            if(!mset[v]&&graph[u][v]!=0)
            {
                key[v]=min(key[v], graph[u][v]);
            }
        }
    }
    return res;
}
int main() 
{ 
	int graph[V][V] = { { 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },}; 

	cout<<primsMST(graph); 

	return 0; 
} 
