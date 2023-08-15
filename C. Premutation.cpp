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
    int n;
    cin>>n;
    int arr[n][n-1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            cin>>arr[i][j];
        }
    }
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        mp[arr[i][n-2]]++;
    }
    int ans;
    //cout<<ans<<endl;
    for(auto it:mp)
    {
        //cout<<it.first<<" "<<it.second<<endl;
        if(it.second==n-1)
        {
            //cout<<it.first<<endl;
            ans=it.first;
            break;
        }
    }

    v ans_v;
    for(int i=0;i<n;i++){
        if(ans!=arr[i][n-2]){
            for(int j=0;j<n-1;j++){
                ans_v.pb(arr[i][j]);
            }
            break;
        }
    }
    ans_v.pb(ans);
    for(int i=0;i<n;i++){
        cout<<ans_v[i]<<" ";
    }
    cout<<endl;


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


