#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100];
bool vis[100];
void dfs(int node)
{
    vis[node]=true;
    //cout<<node<<endl;
    for(int child:graph[node])
    {
        //cout<<"parent:"<<node<<" "<<"child:"<<child<<endl;
        if(!vis[child])
            dfs(child);
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i]){
            dfs(i);
            cnt++;
        }

    }
    cout<<cnt<<endl;
}
