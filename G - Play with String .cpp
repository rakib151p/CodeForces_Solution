#include<bits/stdc++.h>
using namespace std;
const int mod = 999999007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
//#define pop          pop_back
#define p            printf
typedef vector<int>v;
typedef vector<v>vov;
bool vis_number[1000000];

void solution()
{
    string s;
    stack<char>st;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(!st.empty())
        {
            if((st.top()=='A'&&s[i]=='B')||(st.top()=='B'&&s[i]=='B'))
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        else
            st.push(s[i]);

    }
    cout<<st.size();
    cout<<endl;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solution();
    }
}

