#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==2)
        cout<<"1 2"<<endl;
    else if(n==3)
        cout<<"1 2 3"<<endl;
    else if(n==4)
        cout<<"2 4 1 3"<<endl;
    else
    {
        if(n%2==0)
        {
            int x=n/2,z=1,y=n/2;
            while(x--)
            {
                y++;
                cout<<y<<" "<<z++<<" ";
            }
            cout<<endl;
        }
        else
        {
            int x=n/2,z=1,y=n/2+2;
            cout<<z++<<" ";
            while(x--)
            {
                cout<<y++<<" "<<z++<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)solve();
}
