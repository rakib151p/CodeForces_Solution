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
    int n,cnt=2;
    cin >> n;
    v arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]==1)arr[i]++;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] % arr[i - 1] == 0 && arr[i - 1] != 1)
        {
            arr[i] += 1;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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