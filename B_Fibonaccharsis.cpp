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

void solve()
{
    int n,k;
    cin>>n>>k;
    
    if(k>30){
        cout<<0<<endl;
        return;
    }
    int ans=0;
    for(int i=0; i<=n ;i++){
        int first=i,second =n;
        bool ok=true;
        for(int j=1;j<=k-2;j++){
            int temp=second-first;
            second=first;
            first=temp;
            
            if(first>-1&&first<=second){
                continue;
            }else{
                ok=false;
                break;
            }
        }
        if(ok)ans++;
    }
    cout<<ans<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}