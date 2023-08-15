#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long ll
#define pb push_back
#define p push
#define pop pop_back
#define pii pair<long long, long long>
#define vp vector<pii>
#define yes prllf("YES\n")
#define no prllf("NO\n")
#define loop0(j, n) for (ll i = j; i < n; i++)
#define sort(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
typedef vector<ll> v;

map<ll, ll> findMaxLength(vector<ll> &arr)
{
    map<ll, ll> mp;
    ll n = arr.size(), max_len = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cnt++;
        }
        else if (arr[i] == arr[i - 1])
        {
            if (cnt == 0)
                cnt = 2;
            else
                cnt++;
        }
        else
        {
            if (mp[arr[i - 1]] < cnt)
            {
                mp[arr[i - 1]] = cnt;
                // cout<<"In fuction:"<<arr[i-1]<<":"<<mp[arr[i-1]]<<endl;
            }
            cnt = 0;
            if (mp[arr[i]] < 1)
            {
                mp[arr[i]] = 1;
            }
        }
    }
    if (mp[arr[n - 1]] < cnt)
        mp[arr[n - 1]] = cnt;
    return mp;
}
void solution()
{
    ll n;
    cin >> n;
    v arr(n), brr(n);
    set<ll> st;
    map<ll, ll> mp1, mp2;
    for (ll i = 0; i < 2 * n; i++)
    {
        if (i >= n)
        {
            cin >> brr[i - n];
            st.insert(brr[i - n]);
        }
        else
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
    }
    ll ans = 1;
    mp1 = findMaxLength(arr);
    mp2 = findMaxLength(brr);
    for (auto it : st)
    {
        ans = max(ans, (mp1[it] + mp2[it]));
        // cout<<it<<" "<<mp1[it]<<" "<<mp2[it]<<endl;
        // cout << it << " " << mp2[it] << endl;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    
}