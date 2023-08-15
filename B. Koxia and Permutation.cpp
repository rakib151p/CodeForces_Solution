#include<bits/stdc++.h>

using namespace std;
#define ll unsigned long long int
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll sum=0;
        int n,k;
        cin>>n>>k;
        if(n==k||k==1)
        {
            for(int i=1; i<=n; i++)cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            if(n%2==0)
            {
                int x=n;
                while()
                while(k--!=1)cout<<n--<<" ";

            }
            else
            {
                int x=1,y=n;
                for(int i=1; i<=n/2; i++)cout<<y--<<" "<<x++<< " ";
                cout<<n/2+1<<endl;

            }

        }
    }
}


