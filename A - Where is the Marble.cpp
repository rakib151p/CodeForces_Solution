#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&v,int n)
{
    int l=0,h=v.size()-1,mid=(l+h)/2;
    while(l<h)
    {
        if(v[mid]<n)
        {
            l=mid+1;
        }
        else
        {
            h=mid;
        }
        mid=(l+h)/2;
    }
    if(v[mid]>=n)return mid;
    return -1;
}

int main()
{
    int tc=1;
//cin>>tc;
    while(tc)
    {
        int n,q;
        cin>>n>>q;
        if(n==0&&q==0)break;
        vector<int >v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        printf("CASE# %d:\n",tc);
        while(q--)
        {
            int x;
            cin>>x;
            int y=lowerBound(v,x);
            if(y==-1)printf("%d not found\n",x);
            else printf("%d found at %d\n",x,y+1);
        }
        tc++;
    }
}
