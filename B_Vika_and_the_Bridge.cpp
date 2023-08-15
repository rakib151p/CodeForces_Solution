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
    int n, k;
    cin >> n >> k;
    vector<int> v[k + 1];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x].pb(i + 1);
    }
    int ans = n;
    for (int i = 1; i <= k; i++)
    {
        int temp = 0;
        vector<int> sln;
        sln.pb(0);
        for (auto it : v[i])
        {
            sln.pb(it - temp);
            temp = it;
        }
        sln.pb(n - temp);
        sort(sln);
        if (sln.size() >= 2)
        {
            if (sln[sln.size() - 2] > sln[sln.size() - 1] / 2)
            {
                // cout<<sln[sln.size() - 2]<<" ";
                ans = min(ans, sln[sln.size() - 1]);
            }
            else
            {
                // cout<<sln[sln.size() - 1]/2<<" ";
                int y=(sln[sln.size() - 1] / 2);
                ans = min(ans,y );
            }
        }

        // else if (sln.size() == 1)
        // {
        // }
        for (auto it : sln)
        {
            // cout << it << " ";
        }
        // cout << endl;
    }
    cout << ans-1 << endl;
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