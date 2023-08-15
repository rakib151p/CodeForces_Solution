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
    int n,f=0,x=0,y=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='U')y++;
        else if(s[i]=='D')y--;
        else if(s[i]=='R')x++;
        else x--;
        if(x==1&&y==1)
        {
            f++;
            break;
        }
    }
    if(f==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


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


