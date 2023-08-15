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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll res = 1;
    bool ans=1;
    if (a[0] <= b[0]||a[n-1]<=b[n-1])
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            // cout<<a[i]<<" "<<b[i]<<endl;
            ll cnt, take, mid;
            ll left = 0, right = n - 1;
            while (left <= right)
            {
                mid = (left + right) / 2;
                
                if (a[i] > b[mid])
                {
                    take = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
            take=take-i+1;
            res *= take;
            res %= mod;

        }
    }
    // cout << "result" << res << endl;
    cout<<res<<endl;
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