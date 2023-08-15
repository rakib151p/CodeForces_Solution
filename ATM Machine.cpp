#include<bits/stdc++.h>
using namespace std;
unsigned long long digitsum(unsigned long long n)
{
    unsigned long long int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        unsigned long long int n,x;
        cin>>n;
        x=n+1;
        if((digitsum(n)%2==0&&digitsum(x)%2==0)||(digitsum(n)%2==1&&digitsum(x)%2==1))
            cout<<n+2<<endl;
        else
            cout<<n+1<<endl;

    }
}
