#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k,a,b;
        cin>>n>>k;
        for(int i=0;i<k;i++)
            cin>>a>>b;
        if(n==k)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
