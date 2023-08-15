
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s,s1,s2;
        int n,c=0,cnt=0;
        cin>>n>>s;
        map<string,int>mp;
        if(n==1)cout<<"NO"<<endl;
        else
        {
            for(int i=0;i<s.size()-1;i++)
            {
                s1="";
                s1.push_back(s[i]);
                s1.push_back(s[i+1]);

                if(cnt&&s1==s2)
                {
                    cnt=0;
                    continue;
                }
                cnt++;
                s2=s1;


                mp[s1]++;
            }
            for(auto it:mp)
            {
                if(it.second>1){
                    c=1;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(c==0)cout<<"NO"<<endl;
        }

    }
}
