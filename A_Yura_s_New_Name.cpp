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
    string s;
    cin>>s;
    int cnt=0;
    if(s[0]=='_')cnt++;
    if(s.size()==1&&s[0]=='^'){
        cout<<1<<endl;
        return;
    }
    for(int i=1;i<s.size();i++){
        if(s[i]=='_'&&s[i-1]=='_'){
            cnt++;
        }
    }    
    if(s[s.size()-1]=='_')cnt++;
    cout<<cnt<<endl;
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