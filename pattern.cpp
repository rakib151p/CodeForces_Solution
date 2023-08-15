#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z=2;
    cin>>n;
    int x=n,y=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1)
            {
                cout<<j;
            }
            else if(i==n)
            {
                cout<<x--;
            }
            else if(j==1)cout<<z++;
            else if(j==n)cout<<y--;
            else cout<<" ";
        }
        cout<<endl;
    }

main();
}
