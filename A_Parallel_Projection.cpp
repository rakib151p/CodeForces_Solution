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
    int w,d,h,a,b,f,g;
    cin >> w >> d >> h >> a >> b >> f >> g;
	ll ns = 1e18;
	for(int i=0;i<=3;i++) {
		ll tmp = 0;
		if(i == 0 || i == 1) {
			tmp = a + f;
			if(i) tmp = w * 2 - tmp;
			tmp += abs(b - g);
		} else {
			tmp = b + g;
			if(i&1) tmp = d * 2 - tmp;
			tmp += abs(a - f);
		} 
		ns = min(ns, tmp);
	}
	cout << ns + h << endl;
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