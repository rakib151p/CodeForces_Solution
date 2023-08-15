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
#define sort(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
typedef vector<long long> v;

void solve()
{
    string s;
    cin >> s;
    int l = 0, r = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    if (l == 0)
        cout << 1 << endl;
    else if (r == 0)
        cout << s.size() + 1 << endl;
    else
    {
        int mx=0,cnt=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]&&s[i]=='L'){
                cnt++;
                mx=max(mx,cnt);
            }else{
                cnt=0;
            }
            mx=max(mx,cnt);
        }
        cout<<mx+2<<endl;
    }
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