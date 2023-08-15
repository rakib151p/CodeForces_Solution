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
    int n,alice_white=1,alice_black=0,bob_white=0,bob_black=0,i=2,temp1=2,temp2;
    cin>>n;
    temp2=n;
    if(n==1)cout<<1<<" "<<0<<" "<<0<<" "<<0<<endl;
    else
    {
        n--;
        while(n!=0)
        {
            //cout<<temp1<<endl;
            if(i%4==0||i%4==1)
            {
                if(n>i)
                {
                    if(i%2==0)
                    {
                        alice_black+=i/2;
                        alice_white+=i/2;
                        n-=i;
                    }
                    else
                    {
                        if(temp1%2==1)
                        {
                            alice_white+=i/2+1;
                            alice_black+=i/2;
                            n-=i;
                        }
                        else
                        {
                            alice_black+=i/2+1;
                            alice_white+=i/2;
                            n-=i;
                        }
                    }
                }
                else
                {
                    int t=temp2-temp1+1;
                    //cout<<temp2<<" "<<temp1<<endl;
                    //cout<<"t="<<t<<endl;
                    if(temp1%2==1)
                    {
                        if(t%2==1)
                        {
                            alice_white+=t/2+1;
                            alice_black+=t/2;
                        }
                        else
                        {
                            alice_black+=t/2;
                            alice_white+=t/2;
                        }
                    }
                    else
                    {
                        if(t%2==0)
                        {
                            alice_white+=t/2;
                            alice_black+=t/2;
                        }
                        else
                        {
                            alice_black+=t/2+1;
                            alice_white+=t/2;
                        }
                    }
                    n=0;
                }
            }
            else
            {
                if(n>i)
                {
                    if(i%2==0)
                    {
                        bob_black+=i/2;
                        bob_white+=i/2;
                        n-=i;
                    }
                    else
                    {
                        if(temp1%2==0)
                        {
                            bob_white+=i/2;
                            bob_black+=i/2+1;
                            n-=i;
                        }
                        else
                        {
                            bob_black+=i/2;
                            bob_white+=i/2+1;
                            n-=i;
                        }
                    }
                }
                else
                {
                    int t=temp2-temp1+1;
                    //cout<<"t="<<t<<endl;
                    if(temp1%2==1)
                    {
                        if(t%2)
                        {
                            bob_white+=t/2+1;
                            bob_black+=t/2;
                        }
                        else
                        {
                            bob_black+=t/2;
                            bob_white+=t/2;
                        }
                    }
                    else
                    {
                        if(t%2==0)
                        {
                            bob_white+=t/2;
                            bob_black+=t/2;
                        }
                        else
                        {
                            bob_black+=t/2+1;
                            bob_white+=t/2;
                        }
                    }
                    n=0;
                }

            }
            i++;
            //if(temp1+i>=temp2)continue;
            temp1+=i-1;
        }
        cout<<alice_white<<" "<<alice_black<<" "<<bob_white<<" "<<bob_black<<endl;
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



