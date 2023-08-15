#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c=0;
    cin >> n;    //Reading input from STDIN
    for(long long i=1; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            int x=i;
            int y=n/i;
            if((x+y)%2==0)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}
