/*  Md Rakibul Islam
    United International University
    Dhaka,Bangladesh              */

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
    int arr[n+1];
    loop0(1,n+1)cin>>arr[i];
    int ans=1;
    for(int i=1;i<=n;i++){
        int node=arr[i];
        int temp=1;
        while(node!=-1){
            node=arr[node];
            temp++;
        }
        ans=max(ans,temp);
    }
    cout<<ans<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while (t--)
    {
        solution();
    }
}