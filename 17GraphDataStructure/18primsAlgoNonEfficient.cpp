#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int, int>>adj[], int u, int v, int wt)
{
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
}
int main()
{
    int v, e;
    cout<<"Enter the no. of vertices and edges of the graph: ";
    cin>>v>>e;
    vector<pair<int, int>>adj[v];
    cout<<"Enter the edges and weights"<<endl;
    for(int i=0 ;i<e; i++)
    {
        int u, v, wt;
        cin>>u>>v>>wt;
        addEdge(adj, u, v, wt);
    }
    vector<int>key(v);
    vector<int>parent(v);
    vector<bool>ismst(v);
    for(int i=0; i<v; i++)
        key[i]=INT_MAX, parent[i]=-1, ismst[i]=false;
    key[0]=0;
    for(int count =0; count< v-1; count++)
    {
        int mini=INT_MAX, u;
        for(int i=0; i<v; i++)
        {
            if(!ismst[i]&&key[i]<mini)
                mini=key[i], u=i;
        }
        ismst[u]=true;
        for(auto it: adj[u])
        {
            int v = it.first;
            int weight = it.second;
            if(!ismst[v]&&weight<key[v])
                key[v]=weight; parent[v]=u;
        }
    }
    cout<<"The vetices of graph in prims mst will be linked as:"<<endl;
    for(int i=1; i<v; i++)
        cout<<parent[i]<<"-"<<i<<"\n";
    cout<<"The minimum spanning distace of every vertices are:"<<endl;
    for(int i=0; i<v; i++)
        cout<<key[i]<<" ";

    return 0;
}