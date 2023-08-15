/*  Md Rakibul Islam
    United International University
    Dhaka,Bangladesh              */
#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ull long long
#define uull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
#define pii pair<long long, long long>
#define vp vector<pii>
#define yes printf("YES\n")
#define no printf("NO\n")
#define loop0(j, n) for (int i = j; i < n; i++)
#define sort(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
typedef vector<long long> v;

void solve()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    ull ans=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            ull sum=0;
            int x=i,y=j;
            while(x<row&&y<col){
                sum+=arr[x][y];
                x++,y++;
            }
            x=i,y=j;
            while(x>=0&&y>=0){
                sum+=arr[x][y];
                x--,y--;
            }
            x=i,y=j;
            while(x>=0&&y<col){
                sum+=arr[x][y];
                x--,y++;
            }
            x=i,y=j;
            while(x<row&&y>=0){
                sum+=arr[x][y];
                x++,y--;
            }
            sum-=(3*arr[i][j]);
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;

}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}