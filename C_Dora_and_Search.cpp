#include <bits/stdc++.h>
using namespace std;
const int mod =         1000000007;
#define ll              long long
#define ull             unsigned long long int
#define pb              push_back
#define p               push
#define pop             pop_back
#define pii             pair<long long,long long>
#define vp              vector<pii>
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define loop0(j,n)      for(int i=j;i<n;i++)
#define sort(v)         sort(v.begin(),v.end())
#define sortrev(v)      sort(v.begin(),v.end(),greater<int>())
#define mem(a,b)        memset(a,b,sizeof(a))
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a/gcd(a,b))*b
typedef vector<long long> v;
void solution()
{
    int n,mx,mn,l,r;
    cin>>n;
    v arr(n);
    mx=n,mn=1,l=1,r=n;
    loop0(0,n)cin>>arr[i];
    while(l<r){
        int f=0;
        if(arr[l-1]==mn){
            mn++;
            l++;
            f=1;
        }
        if(arr[r-1]==mn){
            mn++;
            r--;
            f=1;
        }
        if(arr[l-1]==mx){
            mx--;
            l++;
            f=1;
        }
        if(arr[r-1]==mx){
            mx--;
            r--;
            f=1;
        }
        if(f==0)break;
    }
    if(l<r)cout<<l<<" "<<r<<endl;
    else cout<<-1<<endl;
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