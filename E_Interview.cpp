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
    int n, sum = 0,ans=0;
    cin >> n;
    v arr(n+1), pre(n+1);
    pre[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        pre[i] = sum;
    }
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        cout<<"? "<<mid-l+1<<" ";
        for(int i=l;i<=mid;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl<<flush;
        int x=0;
        cin>>x;
        if(x==pre[mid]-pre[l-1]){
            l=mid+1;
        }else {
            r=mid-1;
            ans=mid;
        }
    }
    cout<<"! "<<ans<<endl<<flush;
    
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