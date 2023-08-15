#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        while(n>0)
        {
            cout<<n%10;
            n/=10;
        }
    }
    else
    {
        cout<<"-";
        n=-n;
        while(n>0)
        {
            cout<<n%10;
            n/=10;
        }
    }

}
