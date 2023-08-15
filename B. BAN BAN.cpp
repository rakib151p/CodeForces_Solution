#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,j=1;
        cin>>n;
        if(n==1)cout<<1<<endl<<"1 2"<<endl;
        else if(n==2)cout<<1<<endl<<"1 6"<<endl;
        else
        {
            if(n%2==0)
            {
                cout<<n/2<<endl;
                int x=(3*n)/2;
                for(int i=1; i<=n/2; i++)
                {

                    cout<<j<<" "<<x+3<<" ";
                    x+=3;
                    j+=3;
                }
                cout<<endl;
            }
            else
            {
                cout<<n/2+1<<endl;
                int x=(3*n)/2+(5);
                for(int i=1; i<=n/2; i++)
                {
                    cout<<j<<" "<<x<<" ";
                    x+=3;
                    j+=3;
                }
                cout<<j<<" "<<j+2<<" ";
                cout<<endl;
            }
        }
    }
}

