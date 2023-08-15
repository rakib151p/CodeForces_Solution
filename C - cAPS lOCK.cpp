#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        int c=0;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                c++;
        }
        if(c==s.size())
        {
            for(int i=0; i<s.size(); i++)
            {
                printf("%c",s[i]+32);
            }
        }
        else
        {
            c=0;
            if(s[0]>='a'&&s[0]<='z')
            {
                for(int i=1; i<s.size(); i++)
                {
                    if(s[i]>='A'&&s[i]<='Z')
                        c++;
                }
                if(c==s.size()-1)
                {
                    printf("%c",s[0]-32);
                    for(int i=1; i<s.size(); i++)
                    {
                        printf("%c",s[i]+32);
                    }
                    cout<<endl;
                }
                else{
                    cout<<s<<endl;
                }
            }
            else
                cout<<s<<endl;

        }
    }
}

