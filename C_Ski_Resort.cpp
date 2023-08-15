    /*  Md Rakibul Islam
        United International University
        Dhaka,Bangladesh              */
    #include <bits/stdc++.h>
    using namespace std;
    const int mod = 1000000007;
    #define ll long long
    #define ull unsigned long long int
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
    ll nCr(ll n, ll r)
    {
        if (n < r)
            return 0;
        ll res = 0;
        for (int i = r; i <= n; i++)
            res += i;
        return res;
    }
     
    void solution()
    {
        ll n, k, temp, ans = 0, tmp = 0;
        cin >> n >> k >> temp;
        vector<ll> arr(n);
        loop0(0, n)
        {
            cin >> arr[i];
            if (arr[i] <= temp)
                tmp++;
            else
            {
                ans += nCr(tmp, k);
                tmp = 0;
            }
        }
        ans += nCr(tmp, k);
        cout << ans << endl;
    }
     
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int t;
        cin >> t;
        while (t--)
        {
            solution();
        }
    }