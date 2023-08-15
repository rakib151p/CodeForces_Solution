#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=1;i<v.size();i++)
    {
           if(v[i]==v[i-1])
           {
               v.erase(v.begin()+i-1);
           }
    }
    int x=v.size();
    cout<<x;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
