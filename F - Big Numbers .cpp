#include<bits/stdc++.h>
using namespace std;
const int mod = 100000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
#define p            printf
typedef vector<int>v;
typedef vector<v>vov;

ull sumOfDigit(ull n)
{
    ull sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;


}
ull binarySearch(ull n,ull sum)
{
    ull left=0,right=n,ans=0,mid;
    while(left<=right)
    {
        mid=(left+right)>>1;
        if(mid-sumOfDigit(mid)>=sum)
        {
            right=mid-1;
            ans=mid;

        }
        else
        {
            left=mid+1;
            //mid=(left+right)/2;
        }
    }
    return ans;



}

void solution()
{
// write here your code rakib
    ull n,sum;
    cin>>n>>sum;
    if(binarySearch(n,sum)==0)cout<<0<<endl;
    else
    {
        cout<<n-binarySearch(n,sum)+1<<endl;
    }
}

int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        solution();
    }
}
