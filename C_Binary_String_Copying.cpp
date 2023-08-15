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
    int n, q;
    cin >> n >> q;
    vector<int> left_one(n + 2, 0), right_zero(n + 2, n + 1), sorted(n + 1, -1);
    string s;
    cin >> s;
    s = "1" + s;
    s += "0";
    int temp = 0;
    for (int i = 0; i <= n + 1; i++)
    {
        if (s[i] == '1')
        {
            left_one[i] = i;
            temp = i;
        }
        else
            left_one[i] = temp;
    }
    temp = n;
    for (int i = n; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            right_zero[i] = i;
            temp = i;
        }
        else
            right_zero[i] = temp;
    }
    set<pair<int, int>> st;
    while (q--)
    {
        int x, y, temp1, temp2;
        cin >> x >> y;
        if (x == y)
        {
            st.insert({-1, -1});
            // cout << -1 << " " << -1 << endl;
            continue;
        }
        temp1 = left_one[x - 1] + 1, temp2 = right_zero[y + 1] - 1;
        // cout << temp1 << " " << temp2 << endl;
        st.insert({temp1, temp2});
    }
    cout << st.size() << endl;
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