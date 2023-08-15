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
    int n, a, b;
    cin >> n >> a >> b;
    if (a == b)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%c", 'a' + i % 26);
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n / b; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%c", 'a' + j % 26);
            }
        }
        for (int j = 0; j < n-(n / b)*b; j++)
        {
            printf("%c", 'a' + j % 26);
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