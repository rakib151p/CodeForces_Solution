#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;

        if(a%2==1 && b%2==1)
            cout<<"No"<<endl;
        else if(a==1||b==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
