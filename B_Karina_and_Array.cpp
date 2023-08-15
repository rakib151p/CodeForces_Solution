#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<ll>v;
void solution()
{
    ll n,ans;
    cin>>n;
    v arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    ans=max(arr[0]*arr[1],arr[n-1]*arr[n-2]);
    cout<<ans<<endl;
    // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    // cout<<endl;
}
     
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}