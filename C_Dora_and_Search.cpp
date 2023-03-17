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
    int n, l, r, f = 0, f1 = 0;
    cin >> n;
    l = 0, r = n - 1;
    int mn, mx, arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            l = i;
        else
            break;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i] < arr[i - 1])
            r = i - 1;
        else
            break;
    }
    cout<<l<<" "<<r<<endl;
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
