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
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll gcd;
    vector<ll> dif;
    if (n == 1)
        gcd=0;
    else if (n % 2)
    {
        for (int i = 0; i < n / 2; i++)
        {
            dif.push_back(abs(v[i] - v[n - 1 - i]));
        }
        // dif.push_back(v[n / 2]);
        gcd = dif[0];
        for (int i = 1; i < dif.size(); i++)
        {
            gcd = __gcd(gcd, dif[i]);
        }
        // for(int i=0;i<dif.size();i++)cout<<dif[i]<<" ";
        // cout<<endl;
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            dif.push_back(abs(v[i] - v[n - 1 - i]));
        }
        gcd = dif[0];
        for (int i = 1; i < dif.size(); i++)
        {
            gcd = __gcd(gcd, dif[i]);
        }
    }
    cout << gcd << endl;
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
//how to find prime number?