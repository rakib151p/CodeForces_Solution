#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int c=0;
        string s;
        cin>>s;
        if(s.size()<=2)
        {
            if(s=="es"||s=="sY"||s=="Ye"||s=="s"||s=="Y"||s=="e")
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
        {
            for(int i=1; i<s.size(); i++)
            {

                if(s[i]=='Y'&&s[i-1]=='s'||s[i]=='e'&&s[i-1]=='Y'||s[i]=='s'&&s[i-1]=='e')
                {
                    c++;
                }
            }
            if(c==(s.size()-1))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }
}
