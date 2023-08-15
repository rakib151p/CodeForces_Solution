#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
// #define pop          pop_back
typedef vector<int> v;
void solution()
{
    ull edge, vertex, k;
    cin >> vertex >> edge >> k;
    vector<pair<ull, ull>> graph[vertex + 1];
    vector<bool> vis(vertex + 1, false);
    vector<ull> dist(vertex + 1, 1e18);
    while(edge--){
        ull u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    priority_queue<pair<ull, ull>, vector<pair<ull, ull>>, greater<pair<ull, ull>>> pq;
    dist[1] = 0;
    pq.push({0, 1});
    while (!pq.empty())
    {
        auto node = pq.top();
        pq.pop();
        ull parent = node.second;
        if (!vis[parent])
        {
            vis[parent] = true;
            for (auto it : graph[parent])
            {
                ull child = it.first;
                ull child_dist = it.second;
                if (dist[parent] + child_dist < dist[child])
                {
                    dist[child] = dist[parent] + child_dist;
                    pq.push({dist[child], child});
                }
            }
        }
    }
    ull ans=0;
    for(int i=1;i<=k;i++){
        ull s,y;
        cin>>s>>y;
        if(y<dist[s]){
            ans++;
            dist[s]=y;
        }
    }
    // for(int i=1;i<=vertex;i++)cout<<dist[i]<<" ";
    // cout<<endl<<ans;
    cout<<k-ans<<endl;
}

int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solution();
    }
}