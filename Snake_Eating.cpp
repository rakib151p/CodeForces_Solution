#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
// #define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    int n,q;
    cin>>n>>q;
    v arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    while(q--){
        int x;
        cin>>x;
        
        auto lower =lower_bound(arr.begin(), arr.end(), x);
        cout<<(lower-arr.begin()+1)<<endl;//
    }
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
