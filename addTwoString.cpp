#include <bits/stdc++.h>
using namespace std;
const int mod =         1000000007;
#define ll              long long
#define ull             unsigned long long int
#define pb              push_back
#define p               push
#define pop             pop_back
#define pii             pair<long long,long long>
#define vp              vector<pii>
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define loop0(j,n)      for(int i=j;i<n;i++)
#define sort(v)         sort(v.begin(),v.end())
#define sortrev(v)      sort(v.begin(),v.end(),greater<int>())
#define mem(a,b)        memset(a,b,sizeof(a))
#define   gcd(a,b)      __gcd(a,b)
#define   lcm(a,b)      (a/gcd(a,b))*b
typedef vector<long long> v;
void solution()
{
    int n,m;
    cin>>n;
    v arr1(n);
    loop0(0,n)cin>>arr1[i];
    cin>>m;
    v arr2(m);
    loop0(0,m)cin>>arr2[i];
    // reverse(arr1.begin(),arr1.end());
    // reverse(arr2.begin(),arr2.end());
    v ans;
    if(arr1.size()>arr2.size()){
        int len1=arr1.size(),len2=arr2.size();
        int temp=0,i=0;
        while(len2--){
            int total=temp+arr1[i]+arr2[i];
            ans.push_back(total%10);
            temp=total/10;
            i++;
            len1--;
        }
        while(len1--){
            int total=temp+arr1[i];
            ans.push_back(total%10);
            temp=total/10;
            i++;
            // if(temp>0)temp=0;
        }
        if(temp!=0)
            ans.push_back(temp);
    }else if(arr1.size()<arr2.size()){
        int len1=arr1.size(),len2=arr2.size(),temp=0,i=0;
        while(len1--){
            int total=temp+arr1[i]+arr2[i];
            ans.push_back(total%10);
            temp=total/10;
            i++;
            len2--;
        }
        while(len2--){
            int total=temp+arr2[i];
            ans.push_back(total%10);
            temp=total/10;
            i++;
            // len1--;
            // if(temp>0)temp=0;
        }
        if(temp!=0)
            ans.push_back(temp);
    }else{
        int len1=arr1.size(),len2=arr2.size(),temp=0,i=0;
        while(len1--){
            int total=temp+arr1[i]+arr2[i];
            ans.push_back(total%10);
            temp=total/10;
            i++;
        }
        if(temp!=0)
            ans.push_back(temp);
    }
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}