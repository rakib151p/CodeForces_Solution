#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
typedef vector<int> v;
void solution()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n), brr(n), crr(n);
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cin >> brr[i];
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)p.push_back({arr[i],i});
    sort(p.begin(),p.end());
    sort(brr.begin(),brr.end());
    int i=0;
    for(auto it: p){
        // cout<<brr[it.second]<<" ";
        crr[it.second]=brr[i++];
    }
    for(int i=0;i<n;i++)cout<<crr[i]<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}