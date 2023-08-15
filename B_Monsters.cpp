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
// #define sort(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
typedef vector<long long> v;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}
void solve()
{
    ull n, k;
    cin >> n >> k;
    vector<pair<ull, ull>> p;
    v ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % k == 0)
        {
            cout<<i+1<<" ";
            continue;
        }
        p.pb({x % k, i + 1});
    }
    sort(p.begin(), p.end(), cmp);
    int x = 0;
    for (auto it : p)
        cout<<it.second<<" ";
    cout << endl;
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