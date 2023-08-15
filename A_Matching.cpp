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
    int n = 0, c = 0;
    string s;
    cin >> s;
    if (s[0] == '?')
    {
        n += 9;
        c++;
    }
        
    if (s[0] == '0')
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            c++;
            if (n == 0)
                n += 10;
            else
                n *= 10;
        }
    }
    if (c == 0)
        n = 1;
    cout << n << endl;
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