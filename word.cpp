#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s[3][n];
        map<string,int>mp;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>s[i][j];
                mp[s[i][j]]++;
            }
        }
        for(int i=0; i<3; i++)
        {
            int total=0;
            for(int j=0; j<n; j++)
            {
                if(mp[s[i][j]]==1)
                    total+=3;
                else if(mp[s[i][j]]==2)
                    total+=1;
            }
            cout<<total<<" ";
        }
        cout<<endl;
    }
}
