#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
// #define p            push
#define pop          pop_back
#define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    int n,k,w;
    cin>>k>>n>>w;
    ll sum=k*((w*(w+1))/2);
    if(sum-n<0)cout<<0<<endl;
    else cout<<sum-n<<endl;
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
