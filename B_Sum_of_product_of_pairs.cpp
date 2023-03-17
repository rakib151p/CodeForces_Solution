#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
// #define p printf
typedef vector<int> v;
typedef vector<v> vov;

void solution()
{
    int n;
    cin >> n;
    ll ans = 0, temp = 0;
    ll arr[n], sum[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum[i]=((arr[i]+temp)%mod);
        temp=sum[i];
        if(i==0){
            continue;
        }else{
            ans+=((arr[i]*sum[i-1])%mod);
        }
    }
    cout<<ans%mod<<endl;
}

int main()
{
    int tc = 1;
    // cin>>tc;
    while (tc--)
    {
        solution();
    }
}
