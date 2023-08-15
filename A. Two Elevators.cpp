#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(b<c)
        {
            if((a-1)<(c-b+c-1))
                cout<<1<<endl;
            else if((a-1)>(c-b+c-1))
                cout<<2<<endl;
            else
                cout<<3<<endl;
        }
        else
        {
            if((a-1)<(b-1))
                cout<<1<<endl;
            else if((a-1)>(b-1))
                cout<<2<<endl;
            else
                cout<<3<<endl;
        }
    }
}
