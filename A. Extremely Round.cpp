#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n<=10)cout<<n<<endl;
        else if(n<=99)cout<<n/10+9<<endl;
        else if(n<=999)cout<<(n/100)+9*2<<endl;
        else if(n<=9999)cout<<n/1000+9*3<<endl;
        else if(n<=99999)cout<<n/10000+9*4<<endl;
        else if(n<=999999)cout<<n/100000+9*5<<endl;

    }
}
