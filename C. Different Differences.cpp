#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int k,n;
        cin>>k>>n;
        int x=1;
        while(k--)
        {
            cout<<x<<" ";
            if(x<n)
                x+=x;
            else
                x++;
        }
    }
}
