    #include <bits/stdc++.h>
    using namespace std;
    int printnth(int n)
    {
    	if (n == 0)
    		return 0;
    	else if (n == 1 || n == 2)
    		return 1;
    	else
    		return printnth(n - 1) + printnth(n - 2) + printnth(n - 3);
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