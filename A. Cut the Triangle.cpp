#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if((x1==x2||x2==x3||x1==x3)&&(y1==y2||y2==y3||y1==y3))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
