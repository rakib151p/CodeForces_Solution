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
        map<long long,int>mp;
        long long arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        sort(arr,arr+n);
        int i=0;
        for(auto it:mp)brr[i++]=it.first;
        int ans1,ans2;
        ans1=abs(-brr[i-1]+brr[0])+abs(brr[i-1]-brr[i-2]);
        ans2=abs(brr[0]-brr[i-1])+abs(brr[1]-brr[i-1]);
        cout<<max(ans1,ans2)<<endl;
    }
}
