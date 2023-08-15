#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<ll>v;
void solution()
{
    int n,ind,cnt=0;
    cin>>n;
    v arr(n); 
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)cin>>arr[i];
    // map<ll,int>mp;
    for(int i=0;i<n-1;i++){
        ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[ind]>arr[j]){
                ind=j;
            }
            if(ind==i)continue;
            else{
                cnt++;
                p.push_back({i,ind});
            }
        }
    }
    cout<<cnt<<endl;
    for(auto it:p){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
     
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solution();
    }
}