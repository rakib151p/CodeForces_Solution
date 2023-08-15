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
    int row,col;
    cin>>row>>col;
    char graph[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>graph[i][j];
        }
    }
    int c=0;
    if(row==1)cout<<1<<endl;
    else{
        for(int i=1;i<row;i++){
            int cnt=0;
            for(int j=0;j<col;j++){
                if(graph[0][j]==graph[i][j])cnt++;
            }
            if(cnt==col)c++;
        }
        cout<<c+1<<endl;
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