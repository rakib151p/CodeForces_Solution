#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
vector<ull> arr;
string toNineBase(long long n) {
    string nineBase = "";
    while (n > 0) {
        int digit = n % 9;
        nineBase = to_string(digit) + nineBase;
        n /= 9;
    }
    if (nineBase.empty()) {
        nineBase = "0";
    }
    return nineBase;
}
void solution()
{
    ll n;
    cin>>n;
    string s=toNineBase(n);
    for(int i=0;i<s.size();i++){
        if(s[i]-'0'>3){
            cout<<char(s[i]+1);
            continue;
        }
        cout<<s[i];
    }
    cout<<endl;
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