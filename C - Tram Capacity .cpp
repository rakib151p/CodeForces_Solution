#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
#define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    int n,ans=0,mx=-1e9;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        ans+=y;
        ans-=x;
        mx=max(mx,ans);
    }
    cout<<mx<<endl;
}

int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        solution();
    }
}

