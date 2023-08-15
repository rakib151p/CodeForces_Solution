#include <bits/stdc++.h>
using namespace std;
const int mod =         1000000007;
#define ll              long long
#define ull             unsigned long long int
#define pb              push_back
#define p               push
#define pop             pop_back
#define pii             pair<long long,long long>
#define vp              vector<pii>
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define loop0(j,n)      for(int i=j;i<n;i++)
#define sort(v)         sort(v.begin(),v.end())
#define sortrev(v)      sort(v.begin(),v.end(),greater<int>())
#define mem(a,b)        memset(a,b,sizeof(a))
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a/gcd(a,b))*b
typedef vector<long long> v;
void solution()
{
    int n;
    cin>>n;
    v arr(n+2),ans;
    loop0(0,n+2){
        if(i==0||i==n+1)arr[i]=1;
        else cin>>arr[i];
    }
    loop0(1,n+2){
        ans.pb(lcm(arr[i],arr[i-1]));
    }
    loop0(1,n+1)
    {
        // cout<<ans[i]<<" ";
        if(gcd(ans[i],ans[i-1])!=arr[i]){
            no;
            return;
        }
        // cout<<gcd(ans[i],ans[i-1])<<" ";
    }
    yes;
    // cout<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}