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
    if(n%2){
        cout<<n/2<<endl;
    }else{
        cout<<n/2-1<<endl;
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