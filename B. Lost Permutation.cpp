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
bool isp(vector<int>&v){
    for(int i=1;i<=v.size();i++){
        if(i!=v[i-1])return false;
    }
    return true;

}
void solution()
{
    int n,s,res;
    cin>>n>>s;
    v p;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p.pb(x);
    }
    sort(p.begin(),p.end());
    for(int i=1;i<=n;i++){
        int c=0;
        for(int i=0;i<p.size();i++){
            if(i==p[i]){
                c++;
                break;
            }
        }
        if(c==0&&s>=i){
            s-=i;
            p.pb(i);
        }
        sort(p.begin(),p.end());

    }
    if(res==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    for(int i=0;i<p.size();i++)cout<<p[i]<<" ";
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


