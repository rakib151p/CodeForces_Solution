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
    int n, ans = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans ^= x;
        mp[x]++;
    }
    if(ans==0)cout<<ans<<endl;
    else if(n&1)cout<<ans<<endl;
    else cout<<-1<<endl;
    
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