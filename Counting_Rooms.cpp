#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
// #define p push
#define pop pop_back
#define p printf
typedef vector<char> v;
typedef vector<v> vov;
char graph[1006][1006];
bool vis[1006][1006];

bool isvalid(int i, int j, int row, int col)
{
    if (i >= 0 && j >= 0 && graph[i][j] == '.' && !vis[i][j] && i < row && j < col)
        return true;
    return false;
}
void dfs(int i, int j, int row, int col)
{
    //cout<<i<<" "<<j<<endl;
    vis[i][j] = true;
    if (isvalid(i - 1, j, row, col))
        dfs(i - 1, j, row, col);
    if (isvalid(i, j + 1, row, col))
        dfs(i, j + 1, row, col);
    if (isvalid(i + 1, j, row, col))
        dfs(i + 1, j, row, col);
    if (isvalid(i, j - 1, row, col))
        dfs(i, j - 1, row, col);
}

void solution()
{
    int u, v, cnt = 0;
    cin >> u >> v;
    for (int i = 0; i < u; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> graph[i][j];
        }
    }
    for (int i = 0; i < u; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (graph[i][j] == '.' && !vis[i][j])
            {
                //cout<<i<<" "<<j<<endl;
                dfs(i, j, u, v);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    int tc=1;
    // cin>>tc;
    while (tc--)
    {
        solution();
    }
}
