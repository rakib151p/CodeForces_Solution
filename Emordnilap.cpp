#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if(n==1)cout<<"0"<<endl;
        else
        {
            long long fact = (n*(n-1))%mod;
            for (int i = 1; i <= n; i++)
            {
                fact=fact*i%mod;
            }
            cout <<fact<< endl;
        }
    }

    return 0;
}
