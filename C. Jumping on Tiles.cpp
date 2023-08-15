#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        unordered_map<int,char>mp;
        if(s[0]>s[s.size()-1])
        {
            for(int i=1; i<s.size()-1; i++)
            {
                if(s[i]<=s[0]&&s[i]>=s[s.size()-1])
                {
                    mp[i+1]=s[i];
                }
            }
        }
        else
        {
            for(int i=1; i<s.size()-1; i++)
            {
                if(s[i]>=s[0]&&s[i]<=s[s.size()-1])
                {
                    mp[i+1]=s[i];
                }
            }
        }
        sort(mp.begin(),mp.end(),comp);

    }
}
