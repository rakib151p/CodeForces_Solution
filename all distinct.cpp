#include<iostream>
#include<math.h>
using namespace std;
int main()
{
long double n,x=0,result,t,i;

cin>>n>>t;
while(n--)
{
    x=x*10+1;
}
for(i=x;i<(x+1000);i++)
{
    if(i%t==0)
    {
        result=i;
        break;
    }
}
cout<<result;
}
