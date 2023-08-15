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
    string s,st;
    ll digit,n;
    int flag=0;
    cin>>n>>digit>>s;
    for(int i=0;i<n;i++){
        
        if(s[i]-'0'<digit&&flag==0){
            st+=char(digit+'0');
            flag=1;
        }
        st+=s[i];
    }
    if(flag==0)st+=char(digit+'0');
    cout<<st<<endl;

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