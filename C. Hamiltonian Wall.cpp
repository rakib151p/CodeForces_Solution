#include<bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;
bool vis[2][200006];
int n,m;
bool isvalid(int i,int j,vector<vector<char>>&v)
{
    if(i>=0&&i<n&&j>=0&&j<m&&v[i][j]=='B'&&!vis[i][j])return true;
    return false;
}

void dfs(int i,int j,vector<vector<char>>&grid)
{
    vis[i][j]=true;
    if(isvalid(i-1,j,grid))dfs(i-1,j,grid);
    //if(isvalid(i,j-1,grid))dfs(i,j-1,grid);
    if(isvalid(i,j+1,grid))dfs(i,j+1,grid);
    if(isvalid(i+1,j,grid))dfs(i+1,j,grid);
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        vector<vector<char>>v;
        string s;

        int n=2;
        int m,c=0;
        int x;
        cin>>x;
        m=x;
        for(int i=0; i<2; i++)
        {
            cin>>s;
            vector<char>v1;
            for(int j=0; j<m; j++)
            {
                v1.push_back(s[j]);
            }
            v.push_back(v1);
        }
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && v[i][j]=='B')
                {

                    c++;
                    dfs(i,j,v);
                }
            }
        }
        if(c==1)cout<<c<<" YES"<<endl;
        else cout<<c<<" NO"<<endl;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<200000; j++)
                vis[i][j]=false;
        }
    }
}
