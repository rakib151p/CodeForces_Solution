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
    string s;
    cin>>s;
    int arr[s.size()],sum=0;
    arr[0]=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])sum++;
        arr[i]=sum;
    }
    int query;
    cin>>query;
    while(query--){
        int l,r;
        cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<endl;
    }
}
     
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solution();
    }
}