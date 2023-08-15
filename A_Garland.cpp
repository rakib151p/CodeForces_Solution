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
    if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3])cout<<-1<<endl;
    else if(s[0]!=s[1]&&s[1]!=s[2]&&s[2]!=s[3])cout<<4<<endl;
    else{
        map<char,int>mp;
        for(int i=0;i<4;i++){
            mp[s[i]]++;
        }
        int flag=4;
        for(auto it:mp){
            if(it.second==3)flag=6;
        }
        cout<<flag<<endl;
    }
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