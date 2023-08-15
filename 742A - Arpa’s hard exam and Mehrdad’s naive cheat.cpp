#include<iostream>
using namespace std;
int n=1378;
int powe(int n,int p)
{
    unsigned long long int result=1,base=n;
    while(p>0)
    {
        if(p%2==1)
        {
            result=(result*base)%10;
            p--;
        }
        else
        {
            base=(base*base)%10;
            p/=2;
        }
    }
    return result;
}
int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        int p;
        cin>>p;
        cout<<powe(n,p)<<endl;
    }
}
