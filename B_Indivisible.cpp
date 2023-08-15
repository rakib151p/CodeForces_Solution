#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
void solution()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n%2){
        cout<<-1<<endl;
    }else{
        for(int i=n-1,j=n;i>0;i-=2,j-=2){
            cout<<i<<" "<<j<<" ";
        }
        cout<<endl;
    }
}
     
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}