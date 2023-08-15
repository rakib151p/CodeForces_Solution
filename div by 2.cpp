#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        vector<long long>v;
        int mx=a*b;
        for(int i=mx;i<=c;i+=mx)
        {
                v.push_back(i);
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
        cout<<endl;
    }
}
