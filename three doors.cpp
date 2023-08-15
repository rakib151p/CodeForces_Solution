#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[4];
    for(int i=1;i<4;i++)cin>>a[i];
    set<int>st;
    int current=x;
    while(current!=0)
    {
        if(st.size()==3)
            break;
        if(st.find(current)!=st.end())
            break;
        st.insert(current);
        current=a[current];

    }
    if(st.size()==3)cout<<"YES";
    else cout<<"NO";
}
