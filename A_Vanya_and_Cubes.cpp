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
    int n,i=1,ans=0,sum=0,total=0;
    cin>>n;
    while(total<n){
        sum=sum+(i++);
        total+=sum;
        ans++;
    }
    //cout<<total<<endl;
    if(total>n)cout<<--ans<<endl;
    else cout<<ans<<endl;
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