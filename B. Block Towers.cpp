#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr+1,arr+n);
        //cout<<arr[0]<<endl;
        for(int i=1; i<n; i++)
        {
            if(arr[0]<arr[i])
            {
                if((arr[i]-arr[0])%2==0)
                    arr[0]+=((arr[i]-arr[0])/2);
                else
                    arr[0]+=((arr[i]-arr[0])/2+1);
            }
        }
        cout<<arr[0]<<endl;
    }
}

//12
//122 1222 12238 12187 218278 187381738 37263 27636763 28732763 287383787 2376 165262555
