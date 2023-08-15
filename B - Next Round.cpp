#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        int n,k,c=0;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);

        }
        for(int i=0;i<n;i++){
            if(v[k-1]<=v[i]&&v[i]>0)c++;
        }
        cout<<c<<endl;
    }
}
