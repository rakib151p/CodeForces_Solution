#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
vector<string> split(string binaryStr,char ch) {
    vector<string> result;
    string current;
    for (char c : binaryStr) {
        if (c == ch) {
            result.push_back(current);
            current.clear();
        } else {
            current += c;
        }
    }
    result.push_back(current);
    return result;
}

void solution()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }   
    if(mp.size()==s.size()){
        cout<<ceil(log2(s.size()/2))<<endl;
        return;
    }
    char ch;
    int mx=0;
    for(auto it: mp){
        if(mx<it.second){
           mx=max(mx,it.second); 
           ch=it.first;
        }
    }
    vector<string>arr=split(s,ch);
    int mx_size=0;
    for(auto it: arr){
        if(mx_size<it.size()){
            mx_size=it.size();
        }
    }
    if(mx_size==0)cout<<0<<endl;
    else if(mx_size==1)cout<<1<<endl;
    else{
        cout<<ceil(log2(mx_size))<<endl;
    }
    // cout<<mx_size<<endl;
    
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