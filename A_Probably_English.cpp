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
    int n;
    cin>>n;
    bool ans=false;
    while(n--){
        string s;
        cin>>s;
        if(s=="and"||s=="not"||s=="that"||s=="the"||s=="you")ans=true;
    }
    if(ans==true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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