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
    int n,m,cnt=0,f=0;
    cin>>n>>m;
    cout<<abs(2*(n-m))<<endl;
    for(int i=n;i>=m;i--){
        cout<<i<<" ";
    }
    for(int i=m+1;i<n;i++)cout<<i<<" ";
    cout<<endl;
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
