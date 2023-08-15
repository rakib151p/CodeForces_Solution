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
    int n;
    cin>>n;
    v arr1(n),arr2(n);
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<n;i++)cin>>arr2[i];
    for(int i=0;i<n-1;i++){
        if(arr1[i]>arr1[n-1]||arr2[i]>arr2[n-1]){
            swap(arr1[i],arr2[i]);
        }
    }  
    for(int i=0;i<n-1;i++){
        if(arr1[i]>arr1[n-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr2[i]>arr2[n-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    // for(int i=0;i<n;i++)cout<<arr1[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<n;i++)cout<<arr2[i]<<" ";
    cout<<"Yes"<<endl;
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