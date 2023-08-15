#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[][10]={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
    string s1,s2;
    cin>>s1>>s2;
    int x,y;
    for(int i=0;i<7;i++)
    {
        if(s1==ch[i])
            x=i+1;
        if(s2==ch[i])
            y=i+1;
    }
    if(x==y)
        cout<<"YES"<<endl;
    else if(x<y)
    {
        if(y-x==2||y-x==3)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        if((y+7-x)==2||(y+7-x)==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    //main();
}

