#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
typedef vector<int> v;
int countBit(int n)
{
    int ans = 0;
    while (n)
    {
        n = n >> 1;
        ans++;
    }
    return ans;
}
void solution()
{
    int n, m, ans = 0;
    cin >> n;
    m=n-1;
    for (int i = 0; i <countBit(n);i++){
        //cout<<(m&(1<<i))<<" "<<(n&(1<<i))<<endl;
        if((m&(1<<i))!=(n&(1<<i)))ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
}