#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
    long long int n;
    cin>>n;
    int c=0,x=0;
    for(int i=1;i<30;i++)
    {
        if(x>=n)
            break;
        x=pow(2,i);
        c++;
    }
    cout<<c;
	}
	return 0;
}

