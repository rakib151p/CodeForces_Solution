
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long x=INT_MAX;
    for (int i = 1; i < k; i++)
    {
        if (n % i==1)
            continue;
        x = min(x, (n / i) * k + i);
    }
    cout << x <<endl;
}
