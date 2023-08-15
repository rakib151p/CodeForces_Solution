#include<bits/stdc++.h>
using namespace std;
void toggle(int &n)
{
    int temp = 1;
    while (temp <= n)
    {
        n = n ^ temp;
        temp = temp << 1;
    }
}
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            arr[i]-=1;
            toggle(arr[i]);
            cout<<i+1<<" "<<arr[i]<<endl;
        }
    }

}
