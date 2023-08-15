#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x=6,y=-9;
        cin>>n;
        if(n==3)cout<<"NO"<<endl;
        else if(n%2==1)
        {
            x=n/2;
            cout<<"YES"<<endl;
            for(int i=0; i<n-1; i++)
            {
                if(i%2==0)cout<<1-x<<" ";
                else cout<<x<<" ";
            }
            cout<<1-x<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

            for(int i=0; i<n; i++)
            {
                if(i%2==0)cout<<1<<" ";
                else cout<<-1<<" ";
            }
            cout<<endl;
        }
    }
}
