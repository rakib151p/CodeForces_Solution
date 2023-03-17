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
    int a, b, c, d, ans, alice, bob;
    cin >> a >> b >> c >> d;
    if (a == 0)
        cout << 1 << endl;
    else
    {
        cout << a + 2 * min(b, c) + min(a + 1, abs(b - c) + d) << endl;
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
