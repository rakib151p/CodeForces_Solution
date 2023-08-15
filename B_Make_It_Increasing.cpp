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
    int n;
    cin>>n;
    v arr(n);
    loop0(0,n)cin>>arr[i];
    if(arr[n-1]==1){
        cout<<-1<<endl;
        return;
    }
    int i=n-1,cnt=0;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    while(1){
        cout<<i<<endl;
        if(i==1)break;
        while(arr[i]<arr[i-1]){
            arr[i]/=2;
            cnt++;
        }
        i--;
        
    }
    cout<<cnt<<endl;
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