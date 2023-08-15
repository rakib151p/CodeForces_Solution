#include<bits/stdc++.h>
using namespace std;
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

