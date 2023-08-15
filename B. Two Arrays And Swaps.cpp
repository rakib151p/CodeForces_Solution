#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n],brr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
            cin>>brr[i];
        sort(arr,arr+n);
        sort(brr,brr+n);
        reverse(brr,brr+n);
        for(int i=0; i<k; i++)
        {
            if(arr[i]<brr[i])
                swap(arr[i],brr[i]);
        }

        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum=sum+arr[i];
        }
        cout<<sum<<endl;

    }
}
