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
    v arr;
    int flag = 0;
    for (int i = s.size()-1; i >0 ; i--)
    {
        int x=s[i] + s[i - 1] - 2*'0';
        if ( x> 9)
        {
            s[i]=x%10+'0';
            s[i-1]=x/10+'0';
            // cout<<(s[i] + s[i - 1] - 2*'0')%10+'0'<<endl;
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout<<s;
    }
    else
    {
        cout << s[0] + s[1] - 2*'0';
        for (int i = 2; i < s.size(); i++)
            cout << s[i];
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