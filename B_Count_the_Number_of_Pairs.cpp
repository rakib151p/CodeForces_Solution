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
    string s;
    int n,k,ans=0,cnt=0;
    map<char,int>mp;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    string str="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<str.size();i++){
        ans+=min(mp[str[i]],mp[str[i]-32]);
        if(cnt==k)continue;
        int dif=abs(mp[str[i]]-mp[str[i]-32]);
        
        if((cnt+dif/2)>k){
            ans+=(k-cnt);
            cnt=k;
        }
        else{
           ans+= dif/2;
           cnt+=dif/2;
        } 
        //ans+=dif/2;
    }
    cout<<ans<<endl;


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
