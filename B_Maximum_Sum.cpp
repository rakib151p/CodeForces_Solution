#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> v;

void solution()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll temp = 0;
    vector<ll> sum(n);
    for (int i = 0; i < n; i++)
    {
        temp += arr[i];
        sum[i] = temp;
    }
    int i = 0, j = n - k - 1;
    ll ans = 0;
    k++;
    while (k--)
    {
        // ans = max(ans, sum[j] - sum[i] + arr[i]);
        ll cnt = (sum[j] - sum[i] + arr[i])*1LL;
        // cout<<cnt<<endl;
        if (cnt > ans)
            ans = cnt;
        i += 2;
        j++;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}