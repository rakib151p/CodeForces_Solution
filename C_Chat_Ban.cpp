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

void solve()
{
    ull n,k,sum;
    cin>>n>>k;
    sum=(n*(n+1)/2);
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(k<=sum){
        ull hi=n,lo=0;
        while(hi>lo){
            ull mid=(hi+lo)/2;
            sum=(mid*(mid+1)/2);
            if(sum>=k){
                hi=mid;
            }else{
                lo=mid+1;
            }
        }
        cout<<lo<<endl;
    }else{
        ull hi=n-1,lo=1,temp1;
        while(hi>lo){
            ull mid=(hi+lo)/2;
            ull temp2=(n*(n-1)/2)-(mid*(mid+1)/2)+sum;
            // cout<<temp2<<endl;
            if(temp2>=k){
                lo=mid+1;
            }else{
                hi=mid;
            }
        }
        cout<<(n-hi)+n<<endl;
    }
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
        solve();
    }
}