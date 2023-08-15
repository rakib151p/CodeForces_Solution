#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
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
void solution()
{
    int n, cnt = 0, flag = 0;
    cin >> n;
    v arr;
    map<int, int> mp;
    loop0(0, n)
    {
        int x;
        cin >> x;
        if(i==0)arr.pb(x);
        if (i!=0&&arr.back()!=x)
        {
           arr.pb(x); 
        }
            
    }
    if (arr.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (arr.size() == 2)
    {
        cout << 2 << endl;
        return;
    }
    int flag1=0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
        {
            flag = 1;
        }
        else
        {
            if (flag == 1)
            {
                cnt++;
                flag = 0;
            }
            
        }
    }
    if (flag == 1)
    {
        cnt++;
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < arr[i - 1]){
            flag1=1;
        }
        else
        {
            if(flag1==1){
                cnt++;
                flag1=0;
            }
        }
    }
    if (flag1==1)
    {
        cnt++;
    }
    cout<<cnt+1<<endl;
    // for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
    // cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}