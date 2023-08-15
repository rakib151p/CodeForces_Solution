/*  Md Rakibul Islam
    United llernational University
    Dhaka,Bangladesh              */
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
typedef vector<long long> v;
int ans = 0;
ll crosssum(ll i, ll mid, ll j, vector<ll> &arr,int desired)
{
    ll leftsum = -INT32_MAX, rightsum = -INT32_MAX, sum = 0;
    for (ll k = mid; k >= i; k--)
    {
        sum += arr[k];
        leftsum = max(sum, leftsum);
    }
    if(leftsum==desired)ans++;
    sum = 0;
    for (ll k = mid + 1; k <= j; k++)
    {
        sum += arr[k];
        rightsum = max(rightsum, sum);
    }
    if(rightsum==desired)ans++;
    return leftsum + rightsum;
}
ll maxsum(ll i, ll j, vector<ll> &arr, ll desired)
{
    if (i == j)
    {
        // if (desired == arr[i])
        //     ans++;
        return arr[i];
    }
    else
    {
        ll mid = (i + j) / 2;

        ll left = maxsum(i, mid, arr, desired);
        if (left == desired)
            ans++;
        ll right = maxsum(mid + 1, j, arr, desired);
        if (right == desired)
            ans++;
        ll crossum = crosssum(i, mid, j, arr,desired);
        if (crossum == desired)
            ans++;
        return ans;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    ll n, desired;
    cin >> n >> desired;
    vector<ll> arr(n);
    loop0(0, n) cin >> arr[i];
    cout << maxsum(0, n - 1, arr, desired) << endl;
}