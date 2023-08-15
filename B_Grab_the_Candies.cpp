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
      ll odd=0,even=0, n;
      cin>>n;
      v arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2)odd+=arr[i];
        else even+=arr[i];
      }  
      if(odd<even)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
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