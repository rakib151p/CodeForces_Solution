#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
bool isExist(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='8')return true;
    }
    return false;
}
void solution()
{
    ll n,temp;
    cin>>n;
    temp=n;
    string s=to_string(temp);
    if(isExist(s))temp++;
    //cout<<temp;
    for(ll i=temp;i<=temp+100;i++){
        if(isExist(to_string(i))){
            temp=i;
            break;
        }
    }
    cout<<temp-n<<endl;
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