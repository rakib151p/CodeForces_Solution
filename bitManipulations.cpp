#include<bits/stdc++.h>
using namespace std;
int printbinary(int n)
{
    for(int i=10; i>=0; i--){
        if(n&(1<<i))cout<<1;
        else cout<<0;}
cout<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        printbinary(n);
    }
}
