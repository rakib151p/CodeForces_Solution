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
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int flag[n];
    int arr1[n];


    for(int i=0; i<n; i++)
    {
        flag[i]=1;
        arr1[i]=0;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int qc;
        cin>>qc;
        if(qc==1)
        {
            int u,v;
            cin>>u>>v;
            arr[v-1]+=arr[u-1];
            arr[u-1]=0;
            flag[v-1]+=1;
            flag[u-1]-=1;
            mp[v]=u;
            arr1[u]=v;
            //own.push_back( make_pair(u,v) );
        }
        else if(qc==2)
        {
            int x;
            cin>>x;
            cout<<flag[x-1]<<endl;
        }
        else
        {
            int x;
            cin>>x;
            cout<<arr1[x]<<endl;
        }
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


