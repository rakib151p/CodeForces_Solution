#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
typedef vector<int> v;
void solution()
{
    int n, sm = 0, cnt = 0;
    string s;
    cin >> n >> s;
    v sum(n);
    for (int i = 0; i < n; i++)
    {
        sm += (s[i] - '0');
        sum[i] = sm;
        if (s[i] == '1')
            cnt++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if(sum[])
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}