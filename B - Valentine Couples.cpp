#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
#define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    int n;
    cin>>n;
    v boy,girl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        boy.pb(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        girl.pb(x);
    }
    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end(),greater<int>());
    v ans;
    int mx=-1;
    for(int i=0;i<n;i++){
        int x=boy[i]+girl[i];
        if(x>mx)mx=x;
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


