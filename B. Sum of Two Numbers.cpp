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
int sumofdigit(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void solution()
{
    int n;
    cin>>n;
    if(n%2==0)cout<<n/2<<" "<<n/2<<endl;
    else if(n==1)cout<<1<<" "<<0<<endl;
    else
    {
        if(sumofdigit(n/2)+1==sumofdigit(n/2+1))
        {
            cout<<n/2<<" "<<n/2+1<<endl;
        }
        else
        {
            int n1=0,n2=0,odd=0;
            string s1,s2;
            string s=to_string(n);

            for(int i=0; i<s.size(); i++)
            {
                int x=s[i]-48;
                if(x%2==1&&odd%2==0)
                {
                    odd++;
                    s1+=to_string(x/2+1);
                    s2+=to_string(x/2);
                }
                else if(x%2==1&&odd%2==1)
                {
                    odd++;
                    s2+=to_string(x/2+1);
                    s1+=to_string(x/2);
                }
                else
                {
                    s2+=to_string(x/2);
                    s1+=to_string(x/2);
                }
            }
            cout<<stoi(s1)<<" "<<stoi(s2)<<endl;
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




