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
bool fnd(string &s1,string &s2){
    for(int i=0;i<s1.size();i++){
        int cnt=i,c=0;
        for(int j=0;j<s2.size();j++){
            if(s1[cnt++]==s2[j]){
                c++;
            }
        }
        if(c==s2.size())return true;
    }
    return false;
}
void solution()
{
    string str = "";
    for (int i = 3; i <= 100000; i++)
    {
        if (i % 3 == 0)
            str.push_back('F');
        if (i % 5 == 0)
            str.push_back('B');
    }
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        string ch;
        cin >>n>> ch;
        if(fnd(str,ch))cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
}

int main()
{
   solution();
}
