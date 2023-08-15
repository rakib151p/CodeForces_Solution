#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        map<int,int>mp;
        int n,z;
        cin>>n;
        z=n;
        while(n--)
        {
            int m;
            cin>>m;
            while(m--)
            {
                int x;
                cin>>x;
                mp[x]++;
            }

        }
        int c=0;
        for(auto it:mp){
                //cout<<it.first<<" "<<it.second<<endl;
            if(it.second==z)c++;
        }
        if(c==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}

