#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'&&s.size()-1>=i+3)
        {
            if(s[i+1]=='n'&&s[i+2]=='i'&&s[i+3]=='k')
            {
                c++;
                break;
            }
        }
    }
    if(c==1)cout<<"he did it again"<<endl;
    else cout<<"not this time"<<endl;

}
