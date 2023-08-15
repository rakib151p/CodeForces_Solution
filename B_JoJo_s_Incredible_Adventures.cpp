#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
typedef vector<int> v;
void solution()
{
    string s, s1;
    cin >> s;
    s1 = s;
    s1.pop_back();
    s += s1;
    int cnt = 0;
    vector<ll> arr;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
        else
        {
            arr.push_back(cnt);
            cnt = 0;
        }
    }
    arr.push_back(cnt);
    ll mx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        mx = max(mx, arr[i]);
    }
    if (mx == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ll i = 1, j = mx, ans = 0;
        while (i <= j)
        {
            ans = max(ans, i++ * j--);
        }
        cout << ans << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}