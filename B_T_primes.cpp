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
const int temp = 1000006;
bool prime[temp] = {0};
void sieve()
{
    for (int i = 2; i * i < temp; i++)
    {
        if (!prime[i])
        {
            // cout<<prime[i]<<endl;
            for (int j = i * i; j < temp; j += i)
            {
                prime[j] = true;
            }
        }
    }
}

void solve()
{
    long long n;
    cin >> n;
    if (n == 1)
    {
        no;
        return;
    }
    // cout<<floor(sqrt(n)) * floor(sqrt(n))<<" ";
    if (floor(sqrt(n)) * floor(sqrt(n)) == n)
    {
        
        int num = sqrt(n);
        if (!prime[num])
        {
            yes;
            return;
        }
    }
    no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
}