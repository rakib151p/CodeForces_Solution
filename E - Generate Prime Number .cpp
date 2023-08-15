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
            cout<<i+n<<endl;
    }


}
bool prime(int n)
{
    if(n==1)return false;
    else if(n==2||n==3||n==5||n==7)return true;
    else if(n%2==0)return false;
    else if(n%3==0)return false;
    else if(n%5==0)return false;
    else if(n%7==0)return false;
    else
    {
        for(int i=8; i*i<=n; i++)
        {
            if(n%i==0)return false;
        }
    }
    return true;
}
void solution()
{
    int n,m;
    cin>>n>>m;
    segmented_sieve(n,m);
}
///Alternate way to solve but not preferred
//void solution()
//{
//    int n,m;
//    cin>>n>>m;
//    for(int i=n; i<=m; i++)
//    {
//        if(prime(i))cout<<i<<endl;
//    }
//}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solution();
    }
}


