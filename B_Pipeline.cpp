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
    ull n, k;
    cin >> n >> k;
    n--, k--;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else if (n <= k)
    {
        cout << 1 << endl;
    }
    else if (k * (k + 1) / 2 < n)
    {
        cout << -1 << endl;
    }
    else
    {

        ull l = 1, r = k + 1;
        while (l + 1 < r)
        {
            ull md = (l + r) >> 1;
            if ((k + md) * (k - md + 1) / 2 >= n)
                l = md;
            else
                r = md;
        }
        cout << k - l + 1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}