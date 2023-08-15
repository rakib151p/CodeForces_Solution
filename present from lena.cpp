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
    int n,row,col;
    cin>>n;
    row=2*n;
    for(int i=0; i<=row; i++)
    {
        if(i<=n)
        {
            for(int j=0; j<n-i; j++)cout<<"  ";
            for(int j=0; j<=i; j++)
            {
                if(i==0)
                {
                    cout<<j;
                    continue;
                }
                cout<<j<<" ";
            }
            for(int j=i-1; j>=0; j--)
            {
                if(j==0)
                {
                    cout<<j;
                    continue;
                }
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int j=0; j<i-n; j++)cout<<"  ";
            for(int j=0; j<=row-i; j++)
            {
                if(i==row)
                {
                    cout<<j;
                    continue;
                }
                cout<<j<<" ";
            }
            for(int j=row-i-1; j>=0; j--)
            {
                if(j==0||j==row)
                {
                    cout<<j;
                    continue;
                }
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }



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


