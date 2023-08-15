#include<bits/stdc++.h>
using namespace std;

unsigned long long int power(long long base,long long pow)
{
    unsigned long long int res=1;
    while(pow!=0)
    {
        if(pow%2==1)
        {
            res*=base;
            pow--;
        }
        else
        {
            base*=base;
            pow/=2;
        }
    }
    return res;
}

int main()
{
    unsigned long long int base=2,pow,res=1,sum=0;
    cin>>pow;
    for(int i=1;i<=pow;i++)
    {
        sum=sum+power(base,i);
    }
    cout<<sum;
}
