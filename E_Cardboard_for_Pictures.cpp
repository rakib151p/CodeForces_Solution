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
    ull n,c,x,y=0,z,a,sum=0;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=(a*a);
        y+=4*a;
        // cout<<a<<" "<<sum<<" "<<y<<endl;
        
    }
    x=1;
    y/=4*n;
    z=-((c-sum)/(4*n));
    // cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<(long long)(floor((-y+sqrt(y * y - 4 * x * z)) / (2 * x)))<<endl;
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