#include<bits/stdc++.h>
using namespace std;
const int mod = 999999007;
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

void solution()
{
    map<int,int>mp;
    int n,c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    for(auto it:mp)
    {
        if(it.second==1)
        {
            c++;
        }
        else if(it.first==1)
        {
            if(it.second%2==1)
            {
                c+=(it.second/2+1);
            }
            else
            {
                c+=it.second/2;
            }
        }
        else
        {
            c+=it.second;
        }
    }
    cout<<c<<endl;




}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solution();
    }
}

