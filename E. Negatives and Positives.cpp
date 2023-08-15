#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
#define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    ll n,c=0,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)c++;
        if(arr[i]>0)
            sum+=arr[i];
        else{
            arr[i]=-arr[i];
            sum+=arr[i];
        }
    }
    //cout<<sum<<endl;
    sort(arr,arr+n);
    //for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    if(c%2==0)cout<<sum<<endl;
    else cout<<sum-2*arr[0]<<endl;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solution();
    }
}

