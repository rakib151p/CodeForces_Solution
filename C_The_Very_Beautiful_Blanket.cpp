#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
// #define p            printf
typedef vector<int>v;
typedef vector<v>vov;

void solution()
{
    ull n,m;
    cin>>n>>m;
    for(ull i=1;i<=n;i++){
        for(ull j=1;j<=m;j++){
            if((i==1&&j==1)||(i==1&&j==2)||(i==2&&j==1)||(i==2&&j==2)||(i==3&&j==3)||(i==3&&j==4)||(i==4&&j==3)||(i==4)&&j==4){
                cout<<5<<" ";
            }else if((i==1&&j==3)||(i==1&&j==4)||(i==2&&j==3)||(i==2&&j==4)||(i==3&&j==1)||(i==3&&j==2)||(i==4&&j==1)||(i==4&&j==2)){
                cout<<4<<" ";
            }else{
                cout<<i<<j<<" ";
            }
        }cout<<endl;
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
