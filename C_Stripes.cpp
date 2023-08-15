/*  Md Rakibul Islam
    United International University
    Dhaka,Bangladesh              */
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
bool check(string s)
{
    int n = s.size(), c = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            c++;
        if (s[i]=='.')
            return 0;
    }
    if (c == 7)
        return 1;
    return 0;
}
void solution()
{
    int row = 8, col = 8;
    // cin>>row>>col;
    string s[col];
    for (int i = 0; i < row; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < 8; i++)
    {
        if (check(s[i])&&s[i][0]=='R')
        {
           cout<<"R"<<endl;
            return; 
        }
    }
    string str[8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            str[i]+=s[j][i];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (check(str[i])&&str[i][0]=='B')
        {
            cout<<"B"<<endl;
            return;
        }
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
        solution();
    }
}
