#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x,count=0;
    cin>>x;
    for(int j=0;j<v.size();j++)
    {
        if(x==v[j])
            count++;
    }
    if(count==0)
        v.push_back(x);
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++) cout<<v[i];
}
