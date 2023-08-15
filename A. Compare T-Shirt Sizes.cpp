#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2)
            cout<<"="<<endl;
        else if(s1.back()=='L'&&s2.back()=='L')
        {
            if(s1.size()>s2.size())
                cout<<">"<<endl;
            else
                cout<<"<"<<endl;
        }
        else if(s1.back()=='S'&& s2.back()=='S')
        {
            if(s1.size()>s2.size())
                cout<<"<"<<endl;
            else
                cout<<">"<<endl;
        }
        else if((s1.back()=='S'&&s2.back()=='M')||(s1.back()=='S'&&s2.back()=='L')||(s2.back()=='L'&&s1.back()=='M'))
            cout<<"<"<<endl;
        else if((s1.back()=='M'&&s2.back()=='S')||(s1.back()=='L'&&s2.back()=='S')||(s1.back()=='L'&&s2.back()=='M'))
            cout<<">"<<endl;

    }
}
