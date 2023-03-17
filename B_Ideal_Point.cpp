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
    int n, k, l, r, c = 0, left = 0, right = 0;
    cin >> n >> k;
    map<int> mp;
    while (n--)
    {
        cin >> l >> r;
        if (l == k)
            left++;
        if (r == k)
            right++;
    }
    if (left > 0 && right > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
