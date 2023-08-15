#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll           long long
#define ull          unsigned long long int
#define pb           push_back
#define p            push
#define pop          pop_back
typedef vector<int>v;
char nextGreatestLetter(vector<char>& letters, char target) {
    char ans;
    int dif1=26;
    for(int i=0;i<letters.size();i++){
        int dif2=target-letters[i];
        if(dif2<=0){
            dif1=min(dif1,-dif2);
        }
    }
    // cout<<dif1<<endl;
    return target+dif1;
}
     
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        vector<char>letters;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            letters.pb(ch);
        }
        char ch;
        cin>>ch;
        cout<<nextGreatestLetter(letters,ch)<<endl;
    }
}