#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,mx;
        string s;
        cin>>n>>s;
        mx=(int)(s[0]-'a')+1;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,(int)(s[i]-'a')+1);
        }
        cout<<mx<<endl;
    }

}
