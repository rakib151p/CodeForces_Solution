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
    if(n<=9)cout<<n<<endl;
    else if(n>45)cout<<-1<<endl;
    else
    {
        int ind=0;
        v ans;
        for(int i=9; i>0; i--)
        {
            if(n>=i)
            {
                ans.pb(i);
                n-=i;
            }
            if(n==0)break;

        }
        reverse(ans.begin(),ans.end());
        for(int i=0; i<ans.size(); i++)cout<<ans[i];
        cout<<endl;
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

