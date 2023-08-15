#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s2;
        int z;
        cin>>z>>s;

        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                string s1;
                for(int j=i-2; j<i; j++)
                {
                    s1+=s[j];
                }
                int n=stoi(s1);
                char c=n+96;
                s2+=c;
                i-=2;
            }
            else
            {
                string s1;
                s1+=s[i];
                int n=stoi(s1);
                char c=n+96;
                s2+=c;
            }
        }
        for(int i=s2.size()-1;i>=0;i--)
            cout<<s2[i];
        cout<<endl;
    }

}
