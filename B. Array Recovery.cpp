#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c=0,sum=0;
        vector<int>v;
        cin>>n;
        int arr[100];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if((sum-arr[i])>=0&&((sum-arr[i])!=(sum+arr[i])))
            {
                c=-1;
            }
            sum=sum+arr[i];
            v.push_back(sum);

        }
        if(c==-1)
            cout<<c<<endl;
        else
        {
            for(int i=0; i<v.size(); i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }

    }
}
