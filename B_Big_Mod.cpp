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
int moduls(string num, int a)
{
    int res = 0;
    int i;
    for (i = 0; i < num.length(); i++){
         cout<<res<<endl;
         res = (res*10 + (int)num[i] - '0') %a;
    }
    return res;
}

void solution()
{
    ifstream newfile("input.txt");
    ll m=131071;
    string s;
    while (getline(newfile,s))
    {
        s.pop_back();
        cout << s << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solution();
    }
}