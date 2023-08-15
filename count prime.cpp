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
        int arr[100000]= {0};
        int count=0;
        for(int i=2; i*i<=n; i++)
        {
            if(arr[i]==0)
            {
                for(int j=i*i; j<=n; j+=i)
                {
                    arr[j]=1;
                }
            }
        }
        for(int i=2; i<=n; i++)
        {
            if(arr[i]==0){count++;
            cout<<i<<endl;}
        }
        cout<<count;
    }

}


