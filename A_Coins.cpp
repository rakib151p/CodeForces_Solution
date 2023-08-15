#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        unsigned long long int n, k;
        cin >> n >> k;
        if ((n - k) % 2 == 0 || (n - 2 * k) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}