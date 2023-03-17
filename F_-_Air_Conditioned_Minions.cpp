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
    int n, ans = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a, b,c=0;
        cin>>a>>b;
        for (int j = a; j <= b; j++)
        {
            if (mp[j] == 1&&c!=1)
            {
                ans++;
                c=1;
            }
            else
            {
                mp[j]++;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int tc = 1;
    // cin>>tc;
    while (tc--)
    {
        solution();
    }
}
