#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
// #define p            push
// #define pop          pop_back
typedef vector<int> v;
int networkDelayTime(vector<vector<int>> &times, int n, int k)
{
    vector<pair<int, int>> graph[n + 1];
    int edge = times.size();
    for (int i = 0; i < edge; i++)
    {
        graph[times[i][0]].pb({times[i][1], times[i][2]});
        // cout<<times[i][0]<<" "<<times[i][1]<<" "<<times[i][2]<<endl;
    }
    int INF = INT_MAX;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<bool> vis(n + 1, false);
    vector<int> dist(n + 1, INF);
    pq.push({0, k});
    dist[k]=0;
    while (!pq.empty())
    {
        auto node = pq.top();
        pq.pop();
        int parent = node.second;
        int parent_distance=node.first;
        // cout<<parent<<" "<<parent_distance<<endl;
        
        if (!vis[parent])
        {
            vis[parent] = 1;
            for (auto it : graph[parent])
            {
                int child=it.first;
                int child_distance=it.second;
                // cout<<child<<" "<<child_distance<<endl;
                if(dist[parent]+child_distance<dist[child]){
                    // cout<<"rakib"<<endl;
                    dist[child]=parent_distance+child_distance;
                    pq.push({dist[child],child});
                }
            }
        }
    }
    // for(int i=1;i<=n;i++){
    //     for(auto it: graph[i]){
    //         cout<<i<<" "<<it.first<<" "<<it.second<<endl;
    //     }
    // }
    int ans=-1;

    for(int i=1;i<=n;i++){
        ans=max(ans,dist[i]);
    }
    if(ans==INF)return -1;
    else return ans;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int edge, vertex;
        cin >> edge >> vertex;
        vector<vector<int>> graph;
        for (int i = 0; i < edge; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int>temp;
            temp.push_back(u);
            temp.push_back(v);
            temp.push_back(w);
            graph.push_back(temp);
        }
        // cout<<"rakib"<<endl;
        cout<<networkDelayTime(graph,vertex,2);
    }
}