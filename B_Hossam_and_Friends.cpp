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
    ll n,p;
    string s;

    cin>>n>>p;
    for(int i=0;i<n;i++)s+='1';
    while(p--){
        ll a,b;
        cin>>a>>b;
        s[a-1]='0';
        s[b-1]='0';
    }
    cout<<s<<endl;
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