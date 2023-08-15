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
        vector<long long>v,v1;
        map<long long,int>mp;
        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            mp[x]++;
        }
        for(auto it:mp)
        {
            c++;
        }
        cout<<n-c<<endl;
    }
}
