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
    ll n,seq;
    cin>>n>>seq;
    if(n%2==0){
        if(seq<=n/2){
            cout<<seq*2-1<<endl;
        }else{
            cout<<(seq-n/2)*2<<endl;
        }
    }else{
        if(seq<=n/2+1){
            cout<<seq*2-1<<endl;
        }else{
            cout<<(seq-(n/2+1))*2<<endl;
        }
    }
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