#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
typedef vector<int> v;
void solve()
{
    ll n;
    string s, st = "";
    cin >> n >> s;
    map<string, int> mpe;
    for (int j = 0; j < n; j++)
    {
        st += s[j];
        if (st.size() == 2)
        {
            mpe[st]++;
            st = "";
            st += s[j];
        }
    }

    cout << mpe.size() << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}