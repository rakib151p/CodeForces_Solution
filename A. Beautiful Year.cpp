#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
#define p            printf
typedef vector<int>v;
typedef vector<v>vov;
bool vis_number[1000000];
v prime_number;

void sieve()
{
    for(int i=2; i*i<=999999; i++)
    {
        if(!vis_number[i])
        {
            for(int j=i*i; j<=999999; j+=i)
            {
                vis_number[j]=true;
            }
        }

    }
    for(int i=2; i<=999999; i++)
    {
        if(!vis_number[i])prime_number.pb(i);
    }

}
void segmented_sieve(int n,int m)
{
    sieve();
    if(n==1)n++;
    int sizeOfArray=m-n+1;
    int segmented_prime[sizeOfArray]= {0};
    for(auto it:prime_number)
    {
        if(it*it<=m)
        {
            int start=(n/it)*it;
            if(start<n)
            {
                start+=it;
            }
            for(int i=start; i<=m; i+=it)
            {
                if(i!=it)
                {
                    segmented_prime[i-n]=1;
                }
            }
        }
    }
    for(int i=0; i<sizeOfArray; i++)
    {
        if(segmented_prime[i]==0)
            cout<<i+n<<" ";
    }
}
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
        if(check(i)){ans=i;break;}
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


