#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int base=5,pow,res=1;
    cin>>pow;
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
        res%=100;
        base%=100;
    }
    cout<<res;
}
