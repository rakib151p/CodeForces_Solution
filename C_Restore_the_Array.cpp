#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
void solution()
{
    int n,f=0;
    cin>>n;
    v arr(n-1),brr(n);
    for(int i=0;i<n-1;i++)cin>>arr[i];  
    // cout<<arr[0]<<" ";
    brr[0]=arr[0],brr[n-1]=arr[n-2];
    for(int i=1;i<n-1;i++){
        brr[i]=min(arr[i],arr[i-1]);
    }
    for(int i=0;i<brr.size();i++)cout<<brr[i]<<" ";
    cout<<endl;
}
     
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}