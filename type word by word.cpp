#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int i,j;
  for(j=39;j>=-39;j--){
    for(i=-35;i<=35;i++){
if(((abs(i+6)<3&&abs(j-33)<7)||(i>-5&&pow(i+4,2)+9*pow(j-35,2)<=pow(13,2)&&pow(i+4,2)+9*pow(j-35,2)>=pow(8,2)))||(abs(j-20)<6&&abs(i)<3)||(abs(j-5)<3&&abs(i)<3||(abs(i)-j+8>=0&&abs(i)-j+4<=0&&j<14))||((pow(i,2)+pow(j+2,2)<=pow(8,2)&&j<-2&&pow(i,2)+pow(j+2,2)>=pow(4,2))||(abs(abs(i)-5.5)<2&&abs(j+0.5)<1.5))||((9*pow(i,2)+64*pow(abs(j+18)-3,2)<=576&&abs(j+18)>2&&9*pow(i,2)+64*pow(abs(j+18)-3,2)>=200)||(6*i+13*j+243>=0&&6*i+13*j+225<=0&&abs(j+18)<=2))||((abs(abs(i)-6)<2&&abs(j+31)<7)||(abs(i)<8&&abs(j+30.5)<1))){
      printf("*");}
      else{
      printf(" ");
      }
    }
    printf("\n");
  }
    return 0;
}
