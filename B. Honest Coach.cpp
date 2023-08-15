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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=abs(arr[0]-arr[1]);
        for(int i=1;i<n;i++)
        {
            ans=min(ans,abs(arr[i]-arr[i-1]));
        }

        cout<<ans<<endl;
    }
}

