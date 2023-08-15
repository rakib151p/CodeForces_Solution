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
    int n, query, cnt = 0;
    cin >> n >> query;
    vector<int> arr(n + 1), dp(n + 1, 0);
    dp[0];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    dp[1] = 0, dp[2] = 0;
    for (int i = 3; i <= n; i++)
    {
        if (i > 2 && arr[i] <= arr[i - 1] && arr[i - 1] <= arr[i - 2])
            cnt++;
        dp[i] = cnt;
    }
    // cout<<"count"<<cnt<<endl;
    for (int i = 1; i <= query; i++)
    {
        int x, y;
        cin >> x >> y;
        // cout<<dp[i]<<endl;
        int element = y - x + 1, problem = dp[y] - dp[x - 1];
        if (element < 3)
        {
            cout << element << endl;
            continue;
        }
        for (int j = x; j <= x + 1; j++)
        {
            if (j > 2 && arr[j] <= arr[j - 1] && arr[j - 1] <= arr[j - 2])
                problem--;
        }
        cout << element - problem << endl;
    }
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
}