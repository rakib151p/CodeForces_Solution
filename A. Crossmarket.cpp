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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        map<int,int>mp;
        for(int i=n-1; i>=0; i--)
        {
            mp[arr[i]]++;

            if(mp[arr[i]]>1)
                break;
            c++;
        }
        cout<<n-c<<endl;

    }
}
