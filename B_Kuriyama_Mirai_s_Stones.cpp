#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
void solution()
{
    ull n,sm=0;
    cin>>n;
    vector<ll>arr(n),sorted(n),sum(n),sum_sorted(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sorted[i]=arr[i];
        sm+=arr[i];
        sum[i]=sm;
    }
    sm=0;
    sort(sorted.begin(),sorted.end());
    for(int i=0;i<n;i++){
        sm+=sorted[i];
        sum_sorted[i]=sm;
    }
    int query;
    cin>>query;
    while(query--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            if(l==1){
                cout<<sum[r-1]<<endl;
            }else{
                cout<<sum[r-1]-sum[l-2]<<endl;
            }
        }else{
            if(l==1){
                cout<<sum_sorted[r-1]<<endl;
            }else{
                cout<<sum_sorted[r-1]-sum_sorted[l-2]<<endl;
            }
        }
    }
}
     
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solution();
    }
}