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
    int n;
    cin>>n;
    v arr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.pb(x);
    }
    int c=0,sum=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]==-1&&arr[i-1]==-1&&c==0)
        {
            c++;
            arr[i]=1;
            arr[i-1]=1;
        }
        //sum+=arr[i];
    }
    for(int i=0; i<n; i++)sum+=arr[i];
    if(c==0)
    {
        for(int i=1; i<n; i++)
        {
            if((arr[i]==1&&arr[i-1]==-1)||(arr[i]==-1&&arr[i-1]==1)&&c==0)
            {
                c++;
                break;
            }
            //sum+=arr[i];
        }
    }

    if(c==0)sum-=4;
    cout<<sum<<endl;

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


