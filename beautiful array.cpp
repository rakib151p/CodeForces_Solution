#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
       char ch[100];
       gets(ch);
       for(int i=0;i<strlen(ch);i++)
       {
           for(int j=i+1;j<strlen(ch);j++)
           {
               if(ch[i]>ch[j])
               {
                   char temp=ch[i];
                   ch[i]=ch[j];
                   ch[j]=temp;
               }
           }
       }
       cout<<ch;
    }
}
