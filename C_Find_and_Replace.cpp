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
    int n, x = 0;
    char ch;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' || s[i] == '1')
        {
            x ^= 1;
            continue;
        }
        ch = s[i];
        for (int j = i; j < n; j++)
        {
            if (s[j] == ch)
            {
                if (x == 0)
                    s[j] = '0';
                else
                    s[j] = '1';
            }
        }
        x^=1;
        // 
    }
    for (int i = 1; i < n; i++)
    {
        //cout << s[i] << " ";
        if (s[i - 1] == s[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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