#include <bits/stdc++.h>
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
    int n, c = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (c == 0 && !(s[i] == 'M' || s[i] == 'm'))
        {
            cout << "NO" << endl;
            return;
        }
        if (c == 1 && !(s[i] == 'e' || s[i] == 'E'||s[i] == 'M' || s[i] == 'm'))
        {
            cout << "NO" << endl;
            return;
        }
        if (c == 2 && !(s[i] == 'o' || s[i] == 'O'||s[i] == 'e' || s[i] == 'E'))
        {
            cout << "NO" << endl;
            return;
        }
        if (c == 3 && !(s[i] == 'w' || s[i] == 'W'||s[i] == 'o' || s[i] == 'O'))
        {
            cout << "NO" << endl;
            return;
        }
        if ((s[i] == 'M' || s[i] == 'm') && (c == 0))
            c++;

        if ((s[i] == 'E' || s[i] == 'e') && (c == 1))
            c++;
        if ((s[i] == 'o' || s[i] == 'O') && (c == 2))
            c++;
        if ((s[i] == 'w' || s[i] == 'W') && (c == 3))
            c++;
        if (!(s[i] == 'w' || s[i] == 'W') && (c == 4))
        {
            cout << "NO" << endl;
            return;
        }
        if (!((s[i] == 'M' || s[i] == 'm') || (s[i] == 'E' || s[i] == 'e') || (s[i] == 'o' || s[i] == 'O') || (s[i] == 'w' || s[i] == 'W')))
        {
            cout << "NO" << endl;
            return;
        }
    }
    // cout<<c<<endl;
    if (c == 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solution();
    }
}


