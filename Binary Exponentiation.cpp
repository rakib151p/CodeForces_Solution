
#include<bits/stdc++.h>
using namespace std;
int multiply(int n,int pow)
{
    int res=1,base=n;
    while(pow!=0)
    {
        if(pow%2==1)
        {
            res*=base;
            pow-=1;
        }
        else
        {
            base*=base;
            pow/=2;
        }

    }return res;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n,p;
    cin>>n>>p;
    cout<<multiply(n,p);
    }
}
