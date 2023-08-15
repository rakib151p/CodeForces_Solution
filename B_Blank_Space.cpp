#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
vector<string> split(string binaryStr) {
    vector<string> result;
    string current;
    for (char c : binaryStr) {
        if (c == '1') {
            result.push_back(current);
            current.clear();
        } else {
            current += c;
        }
    }
    result.push_back(current);
    return result;
}
string vectorToString(vector<int> vec) {
    ostringstream oss;
    for (int i = 0; i < vec.size(); i++) {
        oss << vec[i];
    }
    return oss.str();
}
void solution()
{
    int n,c=0;
    cin>>n;
    v arr(n),ans;
    string s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    s=vectorToString(arr);
    vector<string> start = split(s);
    int mx=0;
    for(int i=0;i<start.size();i++){
        int x=start[i].size();
        mx=max(mx,x);
        // cout<<start[i]<<endl;
    }
    cout<<mx<<endl;

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