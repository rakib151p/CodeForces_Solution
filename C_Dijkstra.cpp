#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

#define ll long long
#define ull unsigned long long int
#define pb push_back
// #define p            push
// #define pop          pop_back
typedef vector<int> v;
const ull INF = 1e18 + 10;
void solution()
{
    int vertex, edge;
    cin >> vertex >> edge;
    vector<pair<ll, ll>> graph[vertex + 2];
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    vector<ull> dist(vertex + 2, INF);
    vector<bool> vis(vertex + 2, false);
    vector<ll> path(vertex + 2, -1);
    while (edge--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        if (u != v)
        {
            graph[u].pb({v, w});
            graph[v].pb({u, w});
        }
    }

    pq.push({0, 1});
    dist[1] = 0;
    while (!pq.empty())
    {
        auto node = pq.top();
        pq.pop();
        int u = node.second;
        if (!vis[u])
        {
            vis[u] = true;
            for (auto child : graph[u])
            {
                int v = child.first;
                int w = child.second;
                if (dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                    // cout << dist[v] << " " << v << endl;
                    path[v] = u;
                }
            }
        }
    }
    // for (int i = 1; i <= vertex; i++)
    //     cout << dist[i] << " ";
    if(path[vertex]==-1)cout<<-1<<endl;
    else{
        vector<ll>ans;
        int i=vertex;
        while(path[i]!=-1){
            ans.pb(path[i]);
            i=path[i];
        }
        
        reverse(ans.begin(),ans.end());
        ans.pb(vertex);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
}