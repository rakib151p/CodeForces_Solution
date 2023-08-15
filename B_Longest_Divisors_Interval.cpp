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
    ull n,ans=1,count=0;
    cin>>n;
    if(n%2==0)ans=2;
    int temp;
    if(n>1000){
        temp=1000;
    }
    else{
        temp=n;
    }
    for(int i=1;i<=temp;i++){
        if(n%i==0){
            count++;
        }else{
            ans=max(ans,count);
            count=0;
        }
        ans=max(ans,count);
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