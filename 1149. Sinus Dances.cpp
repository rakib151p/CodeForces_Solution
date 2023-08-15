#include<bits/stdc++.h>
using namespace std;

double squareroot(double n)
{
    double left=1.00;
    double right=n;
    double mid=(left+right)/2;
    while((right-left)>=1e-4)
    {
        if(mid*mid==n)return mid;
        else if(mid*mid>n)
        {
            right=mid;
            mid=(left+right)/2;
        }
        else
        {
            left=mid;
            mid=(left+right)/2;
        }
    }
    return mid;

}

int main()
{

    double n;
    cin>>n;
    cout<<squareroot(n);

}
