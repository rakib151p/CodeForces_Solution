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
    int n;
    cin>>n;
    v double_one,one,two;
    for(int i=0;i<n;i++){
        int num;
        string s;
        cin>>num>>s;
        if(s[0]=='1'&&s[1]=='1'){
            double_one.pb(num);
        }else if(s[0]=='1')two.pb(num);
        else if(s[1]=='1')one.pb(num);
    }
    if(double_one.size()!=0)
        sort(double_one.begin(),double_one.end());
    if(one.size()!=0)sort(one.begin(),one.end());
    if(two.size()!=0)sort(two.begin(),two.end());
    if(one.size()==0||two.size()==0){
        if(double_one.size()==0){
            cout<<-1<<endl;
        }else{
            cout<<double_one[0]<<endl;
        }
    }else{
        if(double_one.size()==0){
            cout<<one[0]+two[0]<<endl;
        }else{
            cout<<min(double_one[0],one[0]+two[0])<<endl;
        }
        // 
    }
    
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