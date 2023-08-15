#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,od=0,even=0;
        cin>>n;
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
            if(x%2==0)
                even++;
            else
                od++;
        }
        if(even==n)
            cout<<0<<endl;
        else
            cout<<even<<endl;


    }
}
