#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
void soln()
{
    int n,c=0;
    cin>>n;
    v a(n);
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
        if(a[j]>0)c++;
    }
    int cnt=1;
    for(int j=1;j<=n;j++){
        if(j<c)cout<<cnt++<<" ";
        else cout<<cnt--<<" ";
    }
    cout<<"\n";
    int nt=n-c;
    for(int j=0;j<nt;j++){
        cout<<1<<" "<<0<<" ";
    }
    for(int j=0;j<(n-nt*2);j++){
        cout<<j+1<<" ";
    }
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        soln();
    }
}
