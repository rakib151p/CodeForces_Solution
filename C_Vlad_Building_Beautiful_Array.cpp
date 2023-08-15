#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> brr(n);
    int odd = 0, even = 0;
    for (int j = 0; j < n; j++)
    {
        cin >> brr[j];
        if (brr[j] % 2)
            odd++;
        else
            even++;
    }
    sort(brr.begin(), brr.end());
    if (odd == 0 || even == 0)
        cout << "Yes" << endl;
    else
    {
        if (brr[0] % 2 == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}