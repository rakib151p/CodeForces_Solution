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

void solution()
{
    int n,alice=0,bob=0,i=2;
    cin>>n;
    if(n==1)cout<<1<<" "<<0<<endl;
    else
    {
        alice=1;
        n--;
        while(n!=0)
        {
            if(i%4==0||i%4==1)
            {
                if(n>i)
                {
                    alice+=i;
                    n-=i;
                }
                else
                {
                    alice+=n;
                    n=0;
                }
            }
            else
            {
                if(n>i)
                {
                    bob+=i;
                    n-=i;
                }
                else
                {
                    bob+=n;
                    n=0;
                }

            }
            i++;
        }
        cout<<alice<<" "<<bob<<endl;
    }




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


