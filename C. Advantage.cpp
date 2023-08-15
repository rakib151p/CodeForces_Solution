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
        int arr[n];
        map<int,int>mp;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            //mp[arr[i]]++;
            //if(mp[arr[i]]==1)
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        //reverse(v.begin(),v.end());
        for(int i=0; i<n; i++)
        {
            if(arr[i]==v[v.size()-1])
            {
                if(v.size()==1)cout<<arr[i]-v[v.size()-1]<<" ";
                else cout<<arr[i]-v[v.size()-2]<<" ";
                continue;
            }
            cout<<arr[i]-v[v.size()-1]<<" ";
        }
        cout<<endl;
    }
}

