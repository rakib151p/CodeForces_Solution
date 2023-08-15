#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
#define p            printf

bool check(int n)
{
    int arr[4];
    for(int i=0; i<4; i++)
    {
        arr[i]=n%10;
        n/=10;
        for(int j=0; j<i; j++)
        {
            if(arr[j]==arr[i])return false;
        }
    }
    return true;

}
void solution()
{
    int n,ans;
    cin>>n;
    for(int i=n+1; i<=10000; i++)
    {
        if(check(i))
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

}

int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        solution();
    }
}

