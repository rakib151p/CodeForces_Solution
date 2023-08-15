#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
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
        sort(v.begin(),v.end());
        long long sum=0;
        int x=v.size()-k;
        for(int i=v.size()-1;i>=x;i--)
        {
            sum=sum+v[i];
        }
        cout<<sum<<endl;
    }
}
