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
    v arr(n);
    bool f=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=i+1)f=true;
    }
    if(!f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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