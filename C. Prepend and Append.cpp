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
    int n,c=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size()/2;i++){
        if((s[i]=='0'&&s[s.size()-1-i]=='1')||(s[i]=='1'&&s[s.size()-1-i]=='0'))c++;
        else break;
    }
    cout<<s.size()-2*c<<endl;

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


