#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
//#define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    set<char>forword,backword;
    vector<int>f,b;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        forword.insert(s[i]);
        backword.insert(s[n-i-1]);
        f.pb(forword.size());
        b.pb(backword.size());
    }
    reverse(b.begin(),b.end());
    int mx=-1;
    for(int i=0;i<n-1;i++){
        mx=max(mx,f[i]+b[i+1]);
    }
    cout<<mx<<endl;



}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solution();
    }
}

