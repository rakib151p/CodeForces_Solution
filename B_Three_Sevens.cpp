#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
typedef vector<int> v;
bool cmp(pair<int, int> a,
         pair<int, int> b)
{
    return a.second < b.second;
}
void solution()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 1; j <= x; j++)
        {
            int value;
            cin >> value;
            arr[i].push_back(value);
            mp[value] = i + 1;
        }
    }
    vector<pair<int,int>>p;
    int k = 0;
    for (auto it : mp)
    {
        p.push_back({it.first,it.second});
    }
    sort(p.begin(),p.end(),cmp);
    vector<int>ans;
    int count=1;
    for(auto it:p){
        if(count==it.second){
            count++;
            ans.pb(it.first);
        }
    }
    if(count!=n+1)cout<<-1<<endl;
    else{
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
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