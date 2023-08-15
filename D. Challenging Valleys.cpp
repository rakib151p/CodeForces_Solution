#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c=0;
        cin>>n;
        map<int,int>mp;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(v.size()>0)
            {
                if(x==v[v.size()-1])
                    continue;
            }
            v.push_back(x);

        }
        /*
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        if(v.size()==1)
            c++;
        else
        {
            for(int i=0; i<v.size(); i++)
            {
                if(i==0&&v[i]<v[i+1])
                    c++;
                else if(i==(v.size()-1)&&v[i]<v[i-1])
                    c++;
                else if(v[i]<v[i+1]&&v[i]<v[i-1])
                    c++;
            }
        }
        if(c==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
