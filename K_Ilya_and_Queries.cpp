#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
// #define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    string s;
    int q;
    cin>>s>>q;
    ll ans[s.size()]={0};
    ll sum=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            sum++;
        }
        ans[i]=sum;
    }
    int l,r;
    while(q--){
        
        cin>>l>>r;
        cout<<ans[r-1]-ans[l-1]<<endl;
    }
}

int main()
{
    int tc=1;
    // cin>>tc;
    while(tc--)
    {
        solution();
    }
}
