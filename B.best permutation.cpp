#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            for(int i=n-2; i>0; i--)
            {
                cout<<i<<" ";
            }
            for(int j=n-1; j<=n; j++)
                cout<<j<<" ";
        }
        else
        {
            for(int i=n-3;i<n-1;i++)
                cout<<i<<" ";
            for(int i=n-4;i>0;i--)
                cout<<i<<" ";
            for(int i=n-1;i<=n;i++)
                cout<<i<<" ";
        }

        cout<<endl;
    }
}
