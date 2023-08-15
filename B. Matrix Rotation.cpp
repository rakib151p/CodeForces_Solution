#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a<b&&a<c&&c<d&&b<d)||(c<a&&c<d&&a<b&&d<b)||(d<c&&d<b&&b<a&&c<a)||(b<d&&d<c&&a<c&&b<a))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
