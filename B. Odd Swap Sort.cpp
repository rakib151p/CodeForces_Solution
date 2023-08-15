#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,c=0;
        cin>>n;
        int arr[n];
        vector<int>even,odd;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2)odd.push_back(arr[i]);
            else even.push_back(arr[i]);
        }

        if(is_sorted(even.begin(),even.end())&&is_sorted(odd.begin(),odd.end()))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
