#include<bits/stdc++.h>
using namespace std;
int mx=1e9+7;
long long power(long long n,long long pow)
{
    unsigned long long int ans=1;
    while(pow)
    {
        if(pow%2==0)
        {
            n*=(n%mx);
            n%=mx;
            pow/=2;
        }
        else
        {
            ans*=(n%mx);
            ans%=mx;
            pow--;
        }
    }
    return ans%mx;
}
int main()
{
    int tc;

    cin>>tc;
    while(tc--)
    {
        int n,k;

        long long sum=0,ruf=0;
        cin>>n>>k;

        for(int i=0;; i++)
        {

            if(k%2==1)
            {
                ruf=power(n,i);
                sum+=ruf;

            }
            if(k==1)break;
            k/=2;
        }
        cout<<sum%mx<<endl;

    }
}
