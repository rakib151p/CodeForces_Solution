#include<stdio.h>
#include<math.h>
double fact(double n){
    double ans=1;
    while(n>0){
        ans*=n--;
    }
    return ans;
}
int main(){
    double n,flag=0,ans=0;
    scanf("%lf",&n);
    for(int i=1;i<15;i+=2){
        if(flag==0){
            ans+=(pow(n,i)/(fact(i)));
            flag=1;
        }else{
            ans-=(pow(n,i)/(fact(i)));
            flag=0;
        }
        // printf("%lf \n",fact(i));
    }
    printf("%lf",ans);
}