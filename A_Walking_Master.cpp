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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d)cout<<-1<<endl;
    else if(a==c&&b==d)cout<<0<<endl;
    else{
        int dif=a-b;
        int x=dif+d,y=d;
        if(x<c)cout<<-1<<endl;
        else{
            cout<<abs(y-b)+abs(x-c)<<endl;
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