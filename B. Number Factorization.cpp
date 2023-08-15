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

bool vis_number[1000000+7];
v prime_number;

void sieve()
{
    for(int i=2; i*i<=1000000; i++)
    {
        if(!vis_number[i])
        {
            for(int j=i*i; j<=1000000; j+=i)
            {
                vis_number[j]=true;
            }
        }

    }
    for(int i=2; i<=1000000; i++)
    {
        if(!vis_number[i])prime_number.pb(i);
    }

}

vector<int>primeFact(int n){

}

void solution()
{



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



