#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        int c=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {

            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c=0;
                for(int j=i; j<i+3; j++)
                {
                    if(s[j]=='a'|| s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                    {
                        c++;
                    }
                    if(c>2)
                        break;
                }
                if(c>2)
                    break;
            }
        }
        if(c>2)cout<<"Happy"<<endl;
        else cout<<"Sad"<<endl;
    }
}
