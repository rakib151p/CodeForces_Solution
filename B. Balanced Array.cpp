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
        if((n/2)%2==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=2; i<=n; i+=2)
                cout<<i<<" ";
            for(int i=1; i<=n-2; i+=2)
                cout<<i<<" ";
            cout<<n+(n/2)-1<<endl;
        }
    }
}
