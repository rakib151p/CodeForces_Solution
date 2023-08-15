#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int ans=1;
    while(n!=0)
    {
        ans*=n;
        n--;
    }
    return ans;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x=10-n;
        int ans=fact(x)/(2*fact(x-2));
        cout<<ans*6<<endl;
    }
}
