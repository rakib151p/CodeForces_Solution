#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}

int num_odd(int a,int b)
{
    if(a%2==0&&b%2==0)
    {
        return (b-a)/2;
    }
    else //if(a%2==1&&b%2==1)
    {
        return ((b-a)/2)+1;
    }

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        int arr[l-r],x=0;
        int odd=0;

        odd=num_odd(l,r);

        if(l==r&&l!=1&&l!=0)cout<<"YES"<<endl;
        else
        {
            if(odd>k)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    }
}
