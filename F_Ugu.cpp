
#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
// #define pop pop_back
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
void solution()
{
    int n;
    string s;
    cin >> n >> s;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (st.size() == 0)
            st.push(s[i]);
        if (st.top() != s[i])
            st.push(s[i]);
    }
    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    int ans=st.size();
    if(s[0]=='0')ans--;
    if(ans==0){
        cout<<0<<endl;
        return;
    }
    cout<<ans-1<<endl;
    
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