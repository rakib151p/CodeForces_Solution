/*  Md Rakibul Islam
    United International University
    Dhaka,Bangladesh              */
#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ull long long
#define uull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
#define pii pair<long long, long long>
#define vp vector<pii>
#define yes printf("YES\n")
#define no printf("NO\n")
#define loop0(j, n) for (int i = j; i < n; i++)
#define sort(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
typedef vector<long long> v;
bool is_wood_sufficient(ull m,ull x,vector<ull>&arr){
    ull sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>m)sum+=(arr[i]-m);
    }
    return x<=sum;
}
void solve()
{
    ull n,m;
    cin>>n>>m;
    v arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ull hi=1e9,low=0,mid;
    while(hi-low>1){
        // cout<<hi<<" "<<low<<endl;
        // cout<<mid<<endl;
        mid=(hi+low)/2;
        if(is_wood_sufficient(mid,m,arr)){
            low=mid;
        }else{
            hi=mid-1;
        }
    }
    if(is_wood_sufficient(hi,m,arr))cout<<hi<<endl;
    else cout<<low<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}