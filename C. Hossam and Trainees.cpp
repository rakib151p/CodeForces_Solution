#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+7;
bool Number[N];

vector<long long>prime;
void sieve()
{
    for(long long i=2; i*i<N; i++)
    {
        if(Number[i]==false)
        {
            for(long long j=i*i; j<N; j+=i)
            {
                Number[j]=true;
            }
        }
    }
    for(int i=2;i<N;i++)
    {
        if(Number[i]==false)prime.push_back(i);
    }

}
int main()
{
    int tc;
    cin>>tc;
    sieve();
    while(tc--)
    {
        int n,c=0;
        map<long long,long long>mp;
        cin>>n;
        vector<long long >v;
        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; prime[j]*prime[j]<=v[i]; j++)
            {
                if(v[i]%prime[j]==0)
                {
                    mp[prime[j]]++;
                    while(v[i]%prime[j]==0)
                    {
                        v[i]/=prime[j];
                    }

                }

            }
            if(v[i]>1)
            {
                mp[v[i]]++;
            }
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                cout<<"YES"<<endl;
                c++;
                break;
            }
        }
        if(c==0)cout<<"NO"<<endl;
    }
}
