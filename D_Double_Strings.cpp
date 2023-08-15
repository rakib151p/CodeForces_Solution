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
// #define sort(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
typedef vector<long long> v;
bool compareLength(const std::string &a, const std::string &b)
{
    return a.length() < b.length();
}
void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    map<string, int> mp;
    v ans;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        if(s[i].size()==1){
            ans.pb(0);
            continue;
        }
        for (int j = 0; j < s[i].size(); j++)
        {
            string st1, st2;
            for (int k = 0; k < j; k++)
                st1.push_back(s[i][k]);
            for (int k = j; k < s[i].size(); k++)
                st2.push_back(s[i][k]);
            if (mp[st1] && mp[st2])
            {
                flag = 1;
                ans.push_back(1);
                break;
            }
        }
        if (!flag)
            ans.push_back(0);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}