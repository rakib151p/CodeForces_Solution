#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n,c=0;
    cin>>n;
    map<int,int>mp;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        if(a[i]==0) c++;
    }
    int d=0;
    for(auto it: mp)
    {
        if(it.second>1)
            d=1;
    }
    if(c>=1)
        cout<<n-c<<endl;
    else
    {
        if(d==1)
            cout<<n<<endl;
        else
            cout<<n+1<<endl;
    }

    }
}
