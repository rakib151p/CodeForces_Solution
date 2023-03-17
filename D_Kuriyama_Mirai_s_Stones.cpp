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
    ll n, sum = 0;
    cin >> n;
    ll sum1[n], sum2[n];
    v arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum1[i] = (sum + arr[i]);
        sum = sum1[i];
    }
    
    // cout<<endl;
    sum = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i];
        sum2[i] = (sum + arr[i]);
        sum = sum2[i];
    }
    // for(int i=0;i<arr.size();i++)cout<<sum2[i]<<" ";
    // cout<<endl;
    int q;
    cin>>q;
    while(q--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            if(l==1){
                cout<<sum1[r-1]<<endl;
            }else{
                cout<<sum1[r-1]-sum1[l-2]<<endl;
            }
        }else{
            if(l==1){
                cout<<sum2[r-1]<<endl;
            }else{
                cout<<sum2[r-1]-sum2[l-2]<<endl;
            }
        }
    }
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
