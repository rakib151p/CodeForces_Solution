#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    if(((x-d)<=0&&(y-d)<=0)||((x+d)>=n&&(y+d)>=m))
        cout<<"NO"<<endl;
    else if(((x-d)<=0&&(x+d)>=n)||((y-d)<=0&&(y+d)>=m))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }
}
