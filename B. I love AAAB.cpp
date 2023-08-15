#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n,even1=0,odd1=0,even2=0,odd2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==0)
        {
            if(a[i]%2==0)
                even1++;
            else
                odd1++;
        }
        else
        {
            if(a[i]%2==0)
                even2++;
            else
                odd2++;

        }

    }
    if((even1==0||odd1==0)&&(even2==0||odd2==0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
