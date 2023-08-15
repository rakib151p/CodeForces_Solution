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
    int n,c=0,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int pos=i+1,val=arr[i];
        if((val-pos)%k)c++;
    }
    if(c==0)cout<<c<<endl;
    else if(c==2)cout<<1<<endl;
    else cout<<-1<<endl;
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
