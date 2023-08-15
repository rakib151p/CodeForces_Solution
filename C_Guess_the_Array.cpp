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
    int n, temp = 0;
    cin >> n;
    vector<int> arr(n);
    int temp1,temp2,temp3;
    for (int i = 1; i < 3; i++)
    {
        cout << "? " << i << " " << i + 1 << endl<<flush;
        if(i==1)cin>>temp1;
        else cin>>temp2;
    }
    cout << "? " << 1 << " " << 3 << endl<<flush;
    cin>>temp3;
    arr[temp++]=(temp1+temp2+temp3)/2-temp2;
    arr[temp++]=temp1-arr[0];
    arr[temp++]=temp2-arr[1];
    for (int i = 3; i < n; i++)
    {
        cout << "? " << i << " " << i + 1 << endl<<flush;
        cin>>temp;
        arr[i]=temp-arr[i-1];
    }
    // arr[n-1]=temp-arr[n-2];
    cout<<"! ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<flush;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}