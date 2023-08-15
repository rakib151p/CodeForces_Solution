#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        cout<<2<<endl;
        map<int,int>mp;

        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j*=2)
            {
                mp[j]++;
                if(mp[j]==1)
                    cout<<j<<" ";
            }

        }
        cout<<endl;
    }
}
