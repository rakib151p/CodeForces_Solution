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
    ll n;
    cin>>n;
    if(n%2){
        for(int i=1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
    }else{
        for(int i=1;i<=n;i++)cout<<2*i<<" ";
        cout<<endl;
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