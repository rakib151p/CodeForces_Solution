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

void soln()
{
    ull n, temp1;
    cin >> n;
    map<long long , int> mp;
    temp1 = sqrt(n);
    for (long long j = 1; j <= n; j++)
    {
        for (long long i = j; i <= n; i*=2)
        {
            if (!mp[i])
            {
                cout << i << " ";
                mp[i]++;
            }
        }
        // cout<<endl;
        // cout<<j<<endl;
    }
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        soln();
    }
}