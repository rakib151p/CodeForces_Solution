#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
int ans=0;
void solve(int n,int m){
    if(n==m){
        ans=1;
        return;
    }
    if(n%3==0){
        solve(n/3,m);
        solve((n/3)*2,m);
    }
}
void solution()
{
    int n,m;
    cin>>n>>m;
    if(n<m)cout<<"NO"<<endl;
    else if(n==m)cout<<"YES"<<endl;
    else{
        ans=0;
        solve(n,m);
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }  
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