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
    int f=0;
    char ch;
    cin>>ch;
    string s="codeforces";
    for(int i=0;i<s.size();i++){
        if(ch==s[i])f++;
    }
    if(f>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



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


