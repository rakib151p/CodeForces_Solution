#include <iostream>
#include <vector>
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
    int n, cnt = 1;
    while (cin >> n && n != 0)
    {
        string s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];
        vector<string> ans;
        for (int i = 0; i < n; i += 2)
        {
            ans.pb(s[i]);
        }
        if (n % 2 == 0)
        {
            for (int i = n - 1; i >= 0; i -= 2)
            {
                ans.pb(s[i]);
            }
        }
        else
        {
            for (int i = n - 2; i >= 0; i -= 2)
            {
                ans.pb(s[i]);
            }
        }
        cout << "SET " << cnt++ << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << endl;
    }
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
