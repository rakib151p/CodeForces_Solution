#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n,a,b,c;
        cin>>n;

        if(n%2==0)
        {
            cout<<n/2-1<<" "<<n/2<<" "<<1<<endl;
        }
        else
        {
            if((n+1)%4==0)
            {
                cout<<(n/2)-2<<" "<<(n/2)+2<<" 1"<<endl;
            }
            else
                cout<<(n/2)-1<<" "<<(n/2)+1<<" 1"<<endl;
        }

    }
}
