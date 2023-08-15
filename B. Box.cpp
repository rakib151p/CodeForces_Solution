#include<bits/stdc++.h>
using nmaespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c=0;
        cin>>n;
        map<int, int>mp;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            mp[x]++;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]>=i+1)
            {

            }
            else
            {
                cout<<-1<<endl;
                break;
            }
        }
    }
}
