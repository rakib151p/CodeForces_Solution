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
    int x;
    string s;
    cin>>x>>s;
    ll n=1001,flag=1;
    // set<ll>st;
    // st.insert(n);
    v ans;
    for(int i=1;i<x;i++){
        if(s[i]==s[i-1])flag++;
        else{
            ans.pb(flag);
            flag=1;
        }
    }
    ans.pb(flag);
    ll mx=0;
    for(int i=0;i<ans.size();i++){
        mx=max(mx,ans[i]);
    }
    mx++;
    cout<<mx<<endl;
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