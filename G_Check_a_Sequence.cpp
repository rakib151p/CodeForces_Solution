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
    bool ans=1;
    ll s,n,temp=0;
    cin>>s>>n;
    ll sum[s],arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
        sum[i]=(arr[i]+temp);
        temp=sum[i];
        for(int j=0;j<=i;j++){
            if(sum[i]-sum[j]+arr[j]>(i-j+1+n))
            {
                ans=0;
            }
        }
    }
    if(!ans)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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
