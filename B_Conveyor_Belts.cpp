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
    ll n, x1, x2, y1, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    // cout<<n<<x1<<y1<<x2<<y2;
        x1 = min(x1-1,n-x1);
        x2 = min(x2-1,n-x2);
        y1 = min(y1-1,n-y1);
        y2 = min(y2-1,n-y2);
    // cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    cout<<abs(min(x1,y1)-min(x2,y2))<<endl;
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