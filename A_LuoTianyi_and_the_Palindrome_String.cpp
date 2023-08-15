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
    map<char,int>mp;
    for(int i=0;i<s.size();i++)mp[s[i]]++;   
    if(mp.size()==1)cout<<-1<<endl;
    else cout<<s.size()-1<<endl; 
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