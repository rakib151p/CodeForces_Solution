#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,q;
        cin>>n>>q;
        vector<long long>even,odd;
        long long arr[n],ans[q],sum=0,evn=0,od=0;;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                even.push_back(arr[i]);
                evn++;
            }
            else
            {
                odd.push_back(arr[i]);
                od++;
            }
            sum+=arr[i];
        }
        long long x,y;
        for(int i=0; i<q; i++)
        {

            cin>>x>>y;
            if(x==0)
            {
                //sum+=even_sum;
                sum+=(y*evn);
                if(y%2==1)
                {
                    od+=evn;
                    evn=0;
                }

            }
            else
            {
                //sum+=odd_sum;
                sum+=(y*od);
                if(y%2==1)
                {
                    evn+=od;
                    od=0;
                }

            }
            //cout<<evn<<"  "<<od<<endl;
            ans[i]=sum;
        }
        for(int i=0; i<q; i++)
            cout<<ans[i]<<endl;
    }
}
