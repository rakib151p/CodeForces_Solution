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
void solve()
{
    int n, neg = 0, pos = 0, mx = -11111, mx_idx = -1, mn = 99999, mn_idx = -1,z=0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
            pos++;
        else
            neg++;
        if (mx < arr[i])
        {
            mx = arr[i];
            mx_idx = i;
        }
        if (mn > arr[i])
        {
            mn = arr[i];
            mn_idx = i;
        }
        if(arr[i]==0)z++;
    }
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
            cnt++;
    }
    if (cnt == n - 1)
    {
        cout << 0 << endl;
        return;
    }
    if (neg == 0)
    {
        cout << n - 1 << endl;
        for (int i = 1; i < n; i++)
        {
            cout << i + 1 << " " << i << endl;
        }
    }
    else if (pos == 0)
    {
        cout << n - 1 << endl;
        for (int i = n - 2; i >= 0; i--)
        {
            cout << i + 1 << " " << i + 2 << endl;
        }
    }
    else
    {
        if (neg > pos)
        {
            if(arr[mn_idx]==0)goto x;
            int cnt = 0,temp=arr[mn_idx];
            while (arr[mn_idx] > -20)
            {
                cnt++;
                arr[mn_idx] += arr[mn_idx];
            }
            cout << cnt+pos+n-1 << endl;
            while(cnt--){
                cout<<mn_idx+1<<" "<<mn_idx+1<<endl;
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > 0)
                {
                    arr[i] += arr[mn_idx];
                    cout<<i+1<<" "<<mn_idx+1<<endl;
                }
            }
            for (int i = n - 2; i >= 0; i--)
            {
                cout<<i+1<<" "<<i+2<<endl;
            }
            
        }
        else
        {
            x:
            int cnt = 0;
            while (arr[mx_idx] < 20)
            {
                cnt++;
                arr[mx_idx] += arr[mx_idx];
            }
            cout << cnt+neg+n-1-z << endl;
            while(cnt--){
                cout<<mx_idx+1<<" "<<mx_idx+1<<endl;
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] < 0)
                {
                    arr[i] += arr[mx_idx];
                    cout<<i+1<<" "<<mx_idx+1<<endl;
                }
            }
            for (int i = 1; i < n; i++)
            {
                cout<<i+1<<" "<<i<<endl;
            }  
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}