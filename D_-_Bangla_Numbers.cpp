#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
// #define p            printf
typedef vector<int> v;
typedef vector<v> vov;

string solution(ull n)
{
    string s = "";
    if (n >= 10000000)
    {
        s += solution(n / 10000000) + " kuti ";
        n %= 10000000;
    }
    if (n >= 100000)
    {
        s += to_string(n / 100000) + " lakh ";
        n %= 100000;
    }
    if (n >= 1000)
    {
        s += to_string(n / 1000) + " hajar ";
        n %= 1000;
    }
    if (n >= 100)
    {
        s += to_string(n / 100) + " shata ";
        n %= 100;
    }
    if (n > 0)
        s += to_string(n);
    return s;
}

int main()
{
    ull n, cnt = 1;
    while (scanf("%lld", &n) != EOF)
    {
        printf("%4lld. ", cnt++);
        if (n == 0)
            cout << 0 << endl;
        else
        {
            string s = solution(n);
            cout << s << endl;
        }
    }
}
