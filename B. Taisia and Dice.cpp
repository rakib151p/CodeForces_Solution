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
    int n,s,r,mx;
    cin>>n>>s>>r;
    cout<<s-r<<" ";
    mx=s-r;
    for(int i=1; i<n; i++)
    {
        if(i==n-1)
        {
            cout<<r;
            break;
        }
        if((r-6)/(n-i)>=1&&mx==6)
        {
            cout<<6<<" ";
            r-=6;
        }
        else if((r-5)/(n-i)>=1&&mx>=5)
        {
            cout<<5<<" ";
            r-=5;
        }
        else if((r-4)/(n-i)>=1&&mx>=4)
        {
            cout<<4<<" ";
            r-=4;
        }
        else if((r-3)/(n-i)>=1&&mx>=3)
        {
            cout<<3<<" ";
            r-=3;
        }
        else if((r-2)/(n-i)>=1&&mx>=2)
        {
            cout<<2<<" ";
            r-=2;
        }
        else
        {
            cout<<1<<" ";
            r--;
        }
    }
    cout<<endl;
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


