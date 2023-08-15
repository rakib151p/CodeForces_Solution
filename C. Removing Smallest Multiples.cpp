///MD RAKIBUL ISLAM
///UNITED INTERNATIONAL UNIVERSITY

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        long long n,ans=0,j=0;
        cin>>n>>s;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                v.push_back(2);
            else
                v.push_back(0);
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i-1; j<n; j+=i)
            {
                if(v[j]==0)
                {
                    ans+=i;
                    v[j]=1;
                }
                else if(v[j]==2)
                    break;
            }
        }
        cout<<ans<<endl;
    }
}
