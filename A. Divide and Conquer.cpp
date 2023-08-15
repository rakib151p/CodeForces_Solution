#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        unsigned long long n,c=0,sum=0,x=0,cnt=0,y=0;
        cin>>n;
        long long arr[n],o[n],e[n];
        vector<long long>soln;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2==0)
                 e[y++]=i;
            else
               o[x++]=i;
        }
        if(sum%2==0)
            cout<<0<<"\n";
        else if(sum%2==1)
        {
            for(int i=0; i<x; i++)
            {
                cnt=0;
                while(arr[o[i]]%2==1)
                {
                    arr[o[i]]/=2;
                    cnt++;
                }
                soln.push_back(cnt);
            }
            for(int i=0; i<y; i++)
            {
                cnt=0;
                while(arr[e[i]]%2==0)
                {
                    arr[e[i]]/=2;
                    cnt++;
                }
                soln.push_back(cnt);
            }
            sort(soln.begin(),soln.end());
            cout<<soln[0]<<"\n";
        }
    }
}
