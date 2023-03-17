#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
// #define pb           push_back
// #define p            push
// #define pop          pop_back
// #define p            printf
typedef vector<int> v;
typedef vector<v> vov;

void solution()
{
    int n;string str = "";
    cin >> n;
    string s;
    cin >> s;
    set<string> st;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i || j == i + 1)
                continue;
            str+=s[j];
        }
        st.insert(str);
        str="";
    }
    // for (auto it = st.begin(); it != st.end(); ++it)
    //     cout << ' ' << *it;
    cout << st.size() << endl;
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
