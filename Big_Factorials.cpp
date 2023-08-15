#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
void solution()
{
    ll n,ans=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        ans*=i;
        ans%=mod;
    }
    cout<<ans%10000<<endl;
     
}
     
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solution();
    }
}