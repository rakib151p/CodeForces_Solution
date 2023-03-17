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
    int n, m,f=0;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1[n - 1] == s2[m - 1])
    {
        for (int i = s1.size() - 1; i >= 1; i--)
        {
            if (s1[i] == s1[i - 1])
            {
                f++;
                break;
            }
        }
        for (int i = s2.size() - 1; i >= 1; i--)
        {
            if (s2[i] == s2[i - 1])
            {
                f++;
                break;
            }
        }
    }
    else
    {
        int c=0;
        for (int i = s1.size() - 1; i >= 1; i--)
        {
            if (s1[i] == s1[i - 1])
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            while(s1[s1.size()-1]!=s2[s2.size()-1])
            {
                if(s2.size()==1)break;
                s1+=s2[s2.size()-1];
                s2.pop_back();
            }
        }
        else
        {
 
            while(s1[s1.size()-1]!=s2[s2.size()-1])
            {
                if(s1.size()==1)break;
                s2+=s1[s1.size()-1];
                s1.pop_back();
            }
        }
        for (int i = s1.size() - 1; i >= 1; i--)
        {
            if (s1[i] == s1[i - 1])
            {
                f++;
                break;
            }
        }
        for (int i = s2.size() - 1; i >= 1; i--)
        {
            if (s2[i] == s2[i - 1])
            {
                f++;
                break;
            }
        }
 
    }
    if(f>0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
 
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