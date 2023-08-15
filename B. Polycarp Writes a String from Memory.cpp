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

        map<char,int>mp;
        int x=0;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
            if(mp.size()>3)
            {
                x++;
                mp.clear();
                mp[s[i]]++;
            }

        }
        if(mp.size()!=0)x++;
        cout<<x<<endl;
    }
}
