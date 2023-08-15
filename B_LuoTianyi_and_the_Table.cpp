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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n * m);

    for (int i = 0; i < n * m; i++)
        cin >> arr[i];
    int mx, mn;
    sort(arr.begin(), arr.end());
    mx = arr[m * n - 1];
    mn = arr[0];
    // for (int i = 0; i < n * m; i++)
    //     cout << arr[i]<< " ";
    // cout << endl;
    int second_low = abs(arr[1] - arr[m * n - 1]), second_highest = abs(arr[0] - arr[m * n - 2]);
    int mx1 = max(second_highest, second_low);
    // cout<<second_highest<<" "<<second_low<<endl;
    cout << (mx - mn) * (n * m -min(n,m) ) + mx1*(min(n,m)-1) << endl;
    // cout << mn << " " << mx1 << endl;
    // cout<<endl;
    // cout<<mx-mn<<endl;
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