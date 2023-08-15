#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int cnt=0;
    while(n!=0){
        n/=10;
        cnt++;
    }
    return cnt;
}
int max_dif(int n){
    int variable;
    


    int mx=0,mn=9;
    vector<int>arr;
    while(n!=0){
        arr.push_back(n%10);
        n/=10;
    }
    for(int i=0;i<arr.size();i++){
        mx=max(arr[i],mx);
        mn=min(arr[i],mn);
    }
    return mx-mn;
}
void solve(){
    // int arr[12];
    //12*4 =48 byte
    // STL 
    vector<int>arr; //0 byte
    arr.push_back(12); //4 byte
    arr.push_back(13); //8 byte
    arr.push_back(14); //12 byte
    string str;



    int l,r;
    cin>>l>>r;
    int temp=r;
    if(r-l>200){
        r/=10;
        r/=10;
        r=r*10+9;
        r=r*10;
        while(temp<r)r-=100;
    }else{
        int mx=0,ans=l;
        for(int i=l;i<=r;i++){
            if(mx<max_dif(i)){
                ans=i;
                mx=max_dif(i);
            }
        }
        r=ans;
    }
    
    cout<<r<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}
