#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
    int n,m,row=-1,col=-1,c=0;
    cin>>n>>m;
    char s[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>s[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='R')
            {
                row=i;
                col=j;
                break;
            }
        }
        if(row!=-1)
            break;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='R'&& j<col)
            {
               c++;
               break;
            }
        }
        if(c!=0) break;
    }
    if(c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
}
