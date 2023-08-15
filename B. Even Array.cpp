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
        int arr[n],even=0,odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1&&i%2==0)
                odd++;
            else if(arr[i]%2==0&&i%2==1)
                even++;

        }
        if(even==odd)cout<<even<<endl;
        else cout<<-1<<endl;
    }
}
