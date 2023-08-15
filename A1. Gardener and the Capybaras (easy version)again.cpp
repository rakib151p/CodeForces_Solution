#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int len=s.size()-1;
        if(s[0]==s[len])
        {
            cout<<s[0]<<" ";
            for(int i=1; i<len; i++)
            {
                cout<<s[i];
            }
            cout<<" "<<s[len]<<endl;
        }
        else// if(s[0]>=s[1]&&s[len]>=s[1])
        {
            if(s[1]=='b')
            {
                cout<<s[0]<<" ";
                for(int i=1; i<len; i++)
                {
                    cout<<s[i];
                }
                cout<<" "<<s[len]<<endl;
            }
            else
            {
                cout<<s[0]<<" "<<s[1]<<" ";
                for(int i=2; i<=len; i++)
                {
                    cout<<s[i];
                }
                cout<<endl;
            }

        }
//        else
//        {
//
//        }


    }

}


