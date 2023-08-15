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
    int n;
    cin>>n;
    vector<int >arr(n+1),ans(n);
    // int ans=1;
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=n;i++){
        if(i==arr[i]){
        }else{
            ans.push_back(abs(arr[i]-i));
        }
    }
    int res=ans[0];
    for(int i=1;i<ans.size();i++){
        res=__gcd(res,ans[i]);
    }
    cout<<res<<endl;
}
     
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}