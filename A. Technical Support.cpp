#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,q=0,a=0;
        cin>>n;
        string s;
        cin>>s;
        if(s[n-1]=='Q')
            cout<<"No"<<endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]=='Q')
                    q++;
                else
                {
                    q--;
                    if(q<=0)
                    {
                        q=0;
                    }

                }

            }
            if(q==0)cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }

}
