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
        if(n%2==1)
        {
            for(int i=0;i<n;i++)
                cout<<1<<" ";
        }
        else
        {
            for(int i=0;i<n-2;i++)
                cout<<2<<" ";
            cout<<1<<" "<<3;
        }
        cout<<endl;
    }

}
