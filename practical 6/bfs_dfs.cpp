#include<bits/stdc++.h>
using namespace std;
void bfs(int first,vector<vector<int>>&adj,vector<int>&v)
{
    queue<int>q;
    q.push(first);
    while(!q.empty())
    {
        int node=q.front();q.pop();
        v[node]=1;
        cout<<node<<" ";
        for(auto it:adj[node])
        {
            if(!v[it])
            {
                q.push(it);
            }
        }
    }
}
void dfs(int src,vector<vector<int>>&adj,vector<int>&v)
{
    v[src]=1;
    cout<<src<<" ";
    for(auto it:adj[src]) if(!v[it]) dfs(it,adj,v);
}
int main()
{
    int n,e;cin>>n>>e;
    vector<vector<int>>adj(n+1);
    vector<int>v(n+1);
    for(int i=0;i<e;i++)
    {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i=1;i<=n;i++)
    {
        if(!v[i])
        {
            dfs(i,adj,v);
        }
    }
}