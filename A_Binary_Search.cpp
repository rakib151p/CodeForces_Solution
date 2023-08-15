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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,k;
    cin >> t>>k;
    vector<int>v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        if(binary_search(v.begin(),v.end(),x))yes;
        else no;
    }
}