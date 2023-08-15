/*//13 no solution
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)printf("%d",j);
            else printf("_");
        }
        for(int j=n-1;j>0;j--)
        {
            if(j<=i)printf("%d",j);
            else printf("_");
        }
        printf("\n");
    }
}
//17 no solution
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            if(i==n/2+1||j==n/2+1||j==n/2+1-x||j==n/2+1+x)
                printf("$");
            else
                printf("_");
        }
        if(i>=n/2+1)x--;
        else x++;
        printf("\n");
    }
}*/
/*
#include<stdio.h>
int main()
{
    int n,m;//x=0;
    printf("Type the value of n:");
    scanf("%d",&n);
    int A[n],ans[n];
    printf("Type all elements of A:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Type the value of m:");
    scanf("%d",&m);
    int B[m];
    printf("Type all the elements of B:");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&B[i]);
    }

    for(int i=0; i<n; i++)
    {
        int flag=0;
        for(int j=0; j<m; j++)
        {
            if(A[i]==B[j])
            {
                flag++;
            }
        }
        if(flag==0)
        {
            printf("%d ",A[i]);
        }
            //ans[x++]=A[i];
    }
}
#include<stdio.h>
int main()
{
    int n,m,x=1000;
    printf("Type the value of n:");
    scanf("%d",&n);
    int A[x],temp[x];
    printf("Type all elements of A:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        temp[i]=A[i];
    }
    printf("Type the value of m:");
    scanf("%d",&m);
    int B[x];
    printf("Type all the elements of B:");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&B[i]);
        A[i]=B[i];
    }
    for(int i=0;i<n;i++)
    {
        B[i]=temp[i];
    }
    for(int i=0;i<m;i++)printf("%d ",A[i]);
    printf("\n");
    for(int i=0;i<n;i++)printf("%d ",B[i]);



}*/
