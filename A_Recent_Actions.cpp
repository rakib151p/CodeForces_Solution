#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define p push
#define pop pop_back
// #define p            printf
typedef vector<int> v;
typedef vector<v> vov;

void solution()
{
    set<int> st;
    vector<int> v;
    int act, n;
    cin >> n >> act;
    for(int i=0;i<act;i++)
    {
        int element;
        cin >> element;

        if (st.find(element) != st.end())
        {
            continue;
        }
        else
        {
            if(v.size()==n)continue;
            st.insert(element);
            v.push_back(i+1);
        }
    }
    if(v.size()<n){
        int x=n-v.size();
        while(x--)cout<<-1<<" ";
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solution();
    }
}
