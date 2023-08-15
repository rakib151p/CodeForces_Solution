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
    if(n==1)cout<<1<<endl;
    else if(n%2==1)cout<<-1<<endl;
    else if(n==2)cout<<2<<" "<<1<<endl;
    else{
        cout<<n<<" "<<n-1<<" ";
        for(int i=2;i<n;i+=2){
            cout<<i<<" "<<n-i-1<<" ";
        }
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