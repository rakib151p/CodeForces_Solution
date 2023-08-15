#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(y%x==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
