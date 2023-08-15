#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
const int INF = INT_MAX;
const int N = 100005;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
// #define pop          pop_back
vector<pair<int, int>> graph[N];
typedef vector<int> v;
vector<int> dist(N, INF);
vector<int> vis(N, 0);
void dijkstra(int source)
{

    priority_queue<pair<int, int>> pq;
    pq.push({0, source});
    dist[source] = 0;
    while (!pq.empty())
    {
        auto node = pq.top();
        pq.pop();
        // cout << node.first << " " << node.second << endl;
        int v = node.second, distance = node.first;
        if (vis[v] != 1)
        {
            vis[v] = 1;
            for (auto child : graph[v])
            {
                int child_v = child.second;
                int child_dist = child.first;
                if (distance + child_dist < dist[child_v])
                {
                    dist[child_v] = distance + child_dist;
                    pq.push({dist[child_v], child_v});
                }
            }
        }
    }
}

int main()
{
    int edge, vertex;
    cin >> vertex >> edge;
    while (edge--)
    {
        int distance, u, v;
        cin >> u >> v >> distance;
        graph[u].pb({distance, v});
        graph[v].pb({distance, u});
    }
    // cout << "from "
    //      << " distance"
    //      << " To" << endl;
    // for (int i = 0; i < vertex; i++)
    // {
    //     for (auto it : graph[i])
    //     {
    //         cout << i << "   " << it.first << "   " << it.second << endl;
    //     }
    // }
    dijkstra(1);
    for (int i = 1; i <= vertex; i++)
        cout << dist[i] << " ";
}

// 6
// 9
// 1 1 2
// 1 5 3
// 2 2 3
// 2 2 4
// 2 1 5
// 3 2 5
// 4 3 5
// 4 1 6
// 5 2 6