#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll unsigned long long int
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,dif=5,x=1,ans=0;

        cin>>n;
        ans=((((((n%mod)*((n%mod+1)%mod))%mod))*((4*n-1)%mod)))%mod;
        cout<<(ans*337)%mod<<endl;

    }
}

