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
    ull n, k, mx = -1, mn = INT32_MAX, ans = 1, cnt = 1;
    cin >> n >> k;
    v arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr);
    if (arr[n - 1] - arr[0] <= k)
    {
        cout << "0" << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        // cout << "i:" << i << " " << cnt << endl;
        if (arr[i] - arr[i - 1] <= k)
        {
            cnt++;
        }
        else
        {
            cnt = 1;
            // i += cnt;
        }
        ans = max(ans, cnt);
    }
    // cout<<ans<<" ";
    cout << n - ans << endl;
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