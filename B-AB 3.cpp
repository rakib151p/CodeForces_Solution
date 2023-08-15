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
        stack<char>st;
        for(int i=0; i<s.size(); i++)
        {
            if(st.size()&&((st.top()=='B'&&s[i]=='B')||(st.top()=='A'&&s[i]=='B')))
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        cout<<st.size()<<endl;
    }
}
