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
    int n; cin>>n;
    vector<int>arr[3];
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==1)arr[0].push_back(i+1);
        else if(x==2)arr[1].push_back(i+1);
        else {
            arr[2].push_back(i+1);
        }
    } 
    if(arr[0].size()==0||arr[1].size()==0||arr[2].size()==0)cout<<0<<endl;
    else{
        
        int mn=min(arr[0].size(),min(arr[1].size(),arr[2].size()));
        cout<<mn<<endl;
        for(int i=0;i<mn;i++){
            cout<<arr[0][i]<<" "<<arr[1][i]<<" "<<arr[2][i]<<endl;
        }
    }
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