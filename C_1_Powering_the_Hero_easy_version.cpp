#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
//#define pb           push_back
// #define p            push
//#define pop          pop_back
// #define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    ull ans=0, n;
    cin>>n;
    priority_queue<int>dq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0&&!dq.empty()){
            ans+=dq.top();
            dq.pop();
        }else{
            dq.push(x);
        }
    }
    cout<<ans<<endl;


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
