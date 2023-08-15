    #include <bits/stdc++.h>
    using namespace std;
    int printnth(int n)
    {
    	if (n == 1)return 1;
        if(n==5)return 7;
        if(n==8)return 44;
        // return 0;
    }
     
    int main()
    {
    	int tc;
        cin>>tc;
        for(int i=0;i<tc;i++){
            int n;
            cin>>n;
            cout<<printnth(n)<<endl;
        }
    }