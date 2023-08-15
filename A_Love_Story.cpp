#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
void solution()
{
    string s1="codeforces";
    string s2;
    cin>>s2;
    int c=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i])c++;
    }  
    cout<<c<<endl;
}
     
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}