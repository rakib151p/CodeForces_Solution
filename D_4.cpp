#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
// #define pop          pop_back
typedef vector<int>v;
void solution()
{
    ll vertex,edge;
    cin>>vertex>>edge;
    vector<pair<ll,ll>>graph[vertex+1];
    while(edge--){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].pb({v,w});
        graph[v].pb({u,w});
    }
    vector<ull>dist(vertex+1,1e18);
    vector<bool>vis(vertex+1,1);
    vector<ll>path(vertex+1,-1);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    pq.push({0,1});
    dist[1]=0;
    while(!pq.empty()){
        auto node=pq.top();
        pq.pop();
        ll parent=node.second;
        for(auto it:graph[parent]){
            int child=it.first;
            int child_dist=it.second;
            if(dist[parent]+child_dist<dist[child]){
                dist[child]=dist[parent]+child_dist;
                path[child]=parent;
                pq.push({dist[child],child});
            }
        }
    }
    // for(int i=1;i<=vertex;i++)cout<<dist[i]<<" ";
    // cout<<endl;
    if(dist[vertex]==1e18){
        cout<<-1<<endl;
        return;
    }
    vector<ll>ans;
    ll i=vertex;
    ans.pb(vertex);
    while(path[i]!=-1){
        ans.pb(path[i]);
        i=path[i];
        // cout<<i<<" ";
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}
     
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solution();
    }
}