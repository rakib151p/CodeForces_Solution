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
        map<long long,long long>mp;
        set<long long>s;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            s.insert(x);
        }
        for(auto it:s)
        {
            if(it==0)continue;
            c+=min(mp[it],mp[-it]);
        }
        cout<<mp[0]+c/2<<endl;
    }
}
