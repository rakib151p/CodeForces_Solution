#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
#define pii pair<long long, long long>
#define vp vector<pii>
#define yes printf("YES\n")
#define no printf("NO\n")
#define loop0(j, n) for (int i = j; i < n; i++)
#define sort(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
typedef vector<long long> v;
void solution()
{
    string s;
    cin >> s;
    char temp;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '?')
        {
            temp = s[i];
            flag = true;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (flag)
        {
            if (i == 0 && s[i] == '?')
            {
                s[i] = temp;
                continue;
            }
            if (s[i] == '?')
            {
                s[i] = s[i - 1];
            }
        }
        else
        {
            if (s[i] == '?')
            {
                s[i] = '0';
            }
        }
    }
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}