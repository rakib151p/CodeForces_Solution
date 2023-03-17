#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
// #define p            printf
typedef vector<int> v;
typedef vector<v> vov;

void solution()
{
    ull a, b, n, m, ans = 0;
    cin >> a >> b >> n >> m;
    double ans1, ans2;
    if (n < m)
    {
        ans1 = (float)a / (n);
        ans2 = b;
        if (ans1 < ans2)
        {
            ans+=(a*n);
        }
        else
        {
            ans = n * b;
            cout << "Else" << endl;
        }
        cout << ans << endl;
    }
    else
    {
        ans1 = (float)a / (m + 1);
        ans2 = b;
        if (ans1 < ans2)
        {
            ans += (a * (n / (m + 1)) * m);
            ull temp = n % (m + 1);
            if (temp * b > (m + 1) * a)
            {
                ans += a;
            }
            else
            {
                ans += (temp * b);
            }
        }
        else
        {
            ans = n * b;
            cout << "Else" << endl;
        }
        cout << ans << endl;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solution();
    }
}
