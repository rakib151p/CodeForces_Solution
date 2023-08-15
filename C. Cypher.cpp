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
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        for(int i=0; i<n; i++)
        {
            int s;
            cin>>s;
            char ch[s];
            for(int j=0; j<s; j++)
            {
                cin>>ch[j];
                if(ch[j]=='U')
                {
                    arr[i]--;
                }
                else
                    arr[i]++;
                if(arr[i]>9)arr[i]-=10;
                else if(arr[i]<0)arr[i]+=10;
            }
        }
        for(int i=0; i<n; i++)cout<<arr[i]<<" ";
        cout<<endl;

    }
}
