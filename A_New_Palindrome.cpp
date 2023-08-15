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
    string s;
    cin>>s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;
    // cout<<mp.size()<<endl;
    if (mp.size() >= 2)
    {
        // cout<<"YES"<<endl;
        bool ans = true;
        if (mp.size() == 2)
        {
            for (auto it : mp)
            {
                if (it.second == 1)
                {
                    ans = false;
                    break;
                }
            }
        }

        if (ans == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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