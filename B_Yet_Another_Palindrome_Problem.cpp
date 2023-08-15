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
    int n, prev;
    cin >> n;
    v arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<int, int> mp;
    mp[arr[0]]++;
    prev = arr[0];
    bool ans = false;
    for (int i = 1; i < n; i++)
    {
        if (i != 1 && arr[i] == arr[i - 1] && arr[i - 2] == arr[i])
        {
            ans = true;
            break;
        }
        else if (arr[i] != arr[i - 1])
            mp[arr[i]]++;
    }
    if (!ans)
    {
        for (auto it : mp)
        {
            if (it.second > 1)
                ans = true;
        }
    }
    if (ans)
        yes;
    else
        no;
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