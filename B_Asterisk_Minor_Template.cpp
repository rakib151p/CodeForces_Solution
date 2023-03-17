#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
// #define p printf
typedef vector<int> v;
typedef vector<v> vov;

void solution()
{
    string s1, s2, ans = "";
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << "YES" << endl
             << s1 << endl;
        return;
    }
    else if (s1[0] == s2[0])
    {
        cout << "YES" << endl;
        cout << s1[0] << "*" << endl;
        return;
    }
    else if (s1[s1.size() - 1] == s2[s2.size() - 1])
    {
        cout << "YES" << endl;
        cout << "*" << s1[s1.size() - 1] << endl;
        return;
    }
    {
        for (int i = 0; i < s1.size() - 1; i++)
        {
            for (int j = 0; j < s2.size() - 1; j++)
            {
                if (s1[i] == s2[j]&&s1[i+1]==s2[j+1])
                {
                    cout<<"YES"<<endl<<"*"<<s1[i]<<s1[i+1]<<"*"<<endl;
                    return;
                }
            }
        }
    }
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
