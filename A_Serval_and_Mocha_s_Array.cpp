#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
// #define p            printf
typedef vector<int> v;
typedef vector<v> vov;

void solution()
{
    int n, c = 0;
    cin >> n;
    v arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(arr[i], arr[j]) <= 2)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            break;
    }
    if (flag)
        cout << "YES" << endl;
    else
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
