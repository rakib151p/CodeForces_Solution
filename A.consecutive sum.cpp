#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }
        long long mx,sum=0;
        for(int i=0;i<k;i++)
        {
            mx=0;
            for(int j=i;j<n;j+=k)
            {
                mx=max(v[j],mx);
            }
            sum=sum+mx;
        }
        cout<<sum<<endl;
    }
}
