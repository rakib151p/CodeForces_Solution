/*  Md Rakibul Islam
    United International University
    Dhaka,Bangladesh              */
#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ull long long
#define uull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
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
int mn(int a, int b, int c, int d)
{
    return min(4 - (a + b + c + d), a + b + c + d);
}

void solve()
{
    int n, temp,temp1, ans = 0;
    cin >> n;
    temp = n,temp1=n;
    int arr[n + 1][n + 1];
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j]=s[i-1][j-1]-'0';
            // cout<<arr[i][j]<<" ";
        }
    }
    for (int i = 1; i <= ceil(n/2); i++)
    {
        int x = i, y = i,tmp=temp;
        // cout<<i<<": "<<endl;
        for (int j = temp1; j >= 2; j --)
        {
            int a, b, c, d;
            a = arr[x][y];
            b = arr[y][temp];
            c = arr[temp][tmp];
            d = arr[tmp][x];
            // cout<<x<<y<<" "<<y<<temp<<" "<<temp<<tmp<<" "<<tmp<<x<<endl<<endl;
            // cout<<a<<" "<<b<<" "<<c<< " "<<d<<endl;
            ans += mn(a, b, c, d);
            y++;
            tmp--;
        }
        temp--;
        temp1 -= 2;
    }
    cout <<ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {   
        // cout <<"Test Case: "<< t <<endl<< endl;
        solve();
    }
}