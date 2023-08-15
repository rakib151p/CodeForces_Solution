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
    ull n, sm = 0, q;
    cin >> n >> q;
    vector<ull> arr(n), sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sm += arr[i];
        sum[i] = sm;
        //cout<<sum[i]<<" ";
    }
    //cout<<endl;
    while(q--){
        ull l,r,k,dif;
        cin>>l>>r>>k;
        if(l==1){
            dif=sum[r-1];
            //cout<<"dif:"<<dif<<endl;
        }else{
            dif=sum[r-1]-sum[l-2];
            //cout<<"dif:"<<dif<<endl;
        }
        
        //cout<<"dif:"<<dif<<endl;
        ull ans=k*(r-l+1)+sm-dif;
        if(ans%2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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