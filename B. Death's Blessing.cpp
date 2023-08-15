#include<bits/stdc++.h>

using namespace std;
bool myCompare(pair<long,long>p1,pair<long,long>p2)
{
    return p1.first<p2.first;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        unsigned long long arr[n],brr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
            cin>>brr[i];

        vector<pair<long,long>>v;
        for(int i=0; i<n; i++)
        {
            v.push_back(make_pair(brr[i],arr[i]));
        }
        long long sum=0;
        sort(v.begin(),v.end(),myCompare);
        for(int i=0;i<n;i++)
        {
            sum=sum+v[i].second;
            v[i+1].second+=v[i].first;
        }
        cout<<sum<<endl;


    }
}
