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
    int n,known=0,unknown=0,flag=0;
    cin>>n;
    v arr(n),aviary(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            unknown++;
            flag++;
            aviary[i]=flag;
        }else{
            known+=unknown;
            unknown=0;
            if(known==0)
            {
                aviary[i]=flag=0;
            }
            else{
                aviary[i]=flag=(known/2)+1;
            }
            
        }
    }
    ll mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,aviary[i]);
        // cout<<aviary[i]<<" ";
    }
    // cout<<mx<<endl;
    printf("%lld\n",mx);
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