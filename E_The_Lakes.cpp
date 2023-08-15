#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
typedef vector<int> v;
int graph[1003][1003], vis[1003][1003];
bool isValid(int i, int j, int row, int col)
{
    if (graph[i][j] == 0 || vis[i][j] || i >= row || j >= col || i < 0 || j < 0)
        return false;
    return true;
}

int dfs(int i, int j, int row, int col, int sum)
{
    vis[i][j] = 1;
    sum += graph[i][j];
    if (isValid(i + 1, j, row, col))
        sum = dfs(i + 1, j, row, col, sum);
    if (isValid(i, j + 1, row, col))
        sum = dfs(i, j + 1, row, col, sum);
    if (isValid(i - 1, j, row, col))
        sum = dfs(i - 1, j, row, col, sum);
    if (isValid(i, j - 1, row, col))
        sum = dfs(i, j - 1, row, col, sum);
    return sum;
}
void solution()
{
    int row, col;
    cin >> row >> col;
    // int graph[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> graph[i][j];
            vis[i][j] = 0;
        }
    }
    
    int c = 0,mx=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (graph[i][j] && !vis[i][j])
            {
                // cout << i << " " << j << endl;
                int sum=dfs(i,j,row,col,0);
                // cout<<"rakib"<<endl;
                mx=max(mx,sum);
                // cout<<sum<<endl;
                c++;
            }
            // cout<<graph[i][j];
        }
        // cout<<endl;
    }
    
    cout <<mx << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}
