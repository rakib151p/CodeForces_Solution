#include<bits/stdc++.h>
using namespace std;
int main(){

        string s;
        cin >> s;
        int cn=1,c=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
            }
            else
            {
                if(c==1)cn=0;
                c=1;
            }
        }
        if(c==1)cn=0;

        if(cn==1)cout<<"YES";
        else
            cout<<"NO";

}
