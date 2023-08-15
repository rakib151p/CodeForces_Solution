#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k,r,c;
        cin>>n>>k>>r>>c;

        for(int i=1;i<=n;i++)
        {
            int x=c;
            for(int j=1;j<=n;j++)
            {
                if((i+j)%k==(r+c)%k)
                    cout<<"X";
                else
                    cout<<".";
            }
            cout<<endl;
        }
    }
}
