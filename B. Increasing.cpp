#include<bits/stdc++.h>
using namespace std;
int main(){
int tc;
cin>>tc;
while(tc--)
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
       if(arr[i]==arr[i-1])
       {
           c++;
           break;
       }
    }
    cout<<c<<endl;
    if(c==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}
