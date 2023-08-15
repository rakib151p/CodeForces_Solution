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
    ull n;
    ull sum=0;
    cin>>n;
    v arr(n),sm(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        sum+=arr[i];
        sm[i]=sum;
    }
    if(arr[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        //cout<<" "<<sm[i]<<" "<<arr[i];
        if(sm[i-1]<arr[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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