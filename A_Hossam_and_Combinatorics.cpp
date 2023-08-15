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
    ll n, ans = 0;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    if (mp[arr[0]] == n)
    {
        cout << n * (n - 1) << endl;
    }
    else
        cout << 2 * mp[arr[0]] * mp[arr[n - 1]] << endl;
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