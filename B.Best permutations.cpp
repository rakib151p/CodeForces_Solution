
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=n-2;i>0;i--)
        {
            cout<<i<<" ";
        }
        for(int i=n-1;i<=n;i++)
            cout<<i<<" ";
        cout<<endl;
    }
}
