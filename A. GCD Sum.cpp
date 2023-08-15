#include<bits/stdc++.h>
using namespace std;
int gcd(unsigned long long int a,unsigned long long int b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}
int sum(unsigned long long int n)
{
    int ans=0;
    while(n)
    {
       ans+=n%10;
       n/=10;
    }
    return ans;
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      unsigned long long int n;
      cin>>n;
      while(n)
      {
         if(gcd(n,sum(n))>1){
            cout<<n<<endl;
            break;
         }
         n++;
      }


  }
}
