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
    int n,c=0,cnt=0,l=-1,r,flag=0;
    cin>>n;
    v arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]&&c==0){
            if(cnt==0)l=i-1;
            cnt++;
        }
        if(cnt!=0 && arr[i-1]<arr[i]){
            c=1;
            break;
        }
    }
    reverse(arr.begin()+l,arr.begin()+l+cnt+1);
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            flag=1;
        }
    }
    if(flag==1)cout<<"no"<<endl;
    else{
        if(cnt==0){
           cout<<"yes"<<"\n"<<1<<" "<<1<<endl; 
           return;
        }
        cout<<"yes"<<"\n"<<l+1<<" "<<l+1+cnt<<endl;
    }
    //for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    //cout<<endl;
}
     
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solution();
    }
}