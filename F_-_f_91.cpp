#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
// #define p            printf
typedef vector<int>v;
typedef vector<v>vov;

ull f91(ull n)
{
    if(n<=100)
    {
        return f91(f91(n+11));
    }
    return n-10;
}
int main()
{
    ull n;
    while(cin>>n&&n!=0)
    {
        cout<<"f91("<<n<<")"<<" = "<<f91(n)<<endl;
    }
}