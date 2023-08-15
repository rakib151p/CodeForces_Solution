#include<bits/stdc++.h>
using namespace std;

//#define N 101
long long mat[2][2];
long long diagonal[2][2];

void declareDiagonal(int n)
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(i==j)
                diagonal[i][j]=1;
            else
                diagonal[i][j]=0;
        }
    }
}
void multiplyBaseMatrix(int n)
{
    int ansMat[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            int sum=0;
            for(int k=0; k<2; k++)
            {
                sum+=mat[i][k]*mat[k][j];
            }
            ansMat[i][j]=sum;
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            mat[i][j]=ansMat[i][j];
        }
    }
}

void multiplyWithDiagonal(int n)
{
    int ansMat[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            int sum=0;
            for(int k=0; k<2; k++)
            {
                sum+=diagonal[i][k]*mat[k][j];
            }
            ansMat[i][j]=sum;
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            diagonal[i][j]=ansMat[i][j];
        }
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        long long a,b,pow,mat1[1][2];
        declareDiagonal(2);

        cin>>a>>b;
        mat1[0][0]=a;
        mat1[0][1]=b;

        cin>>pow;
        while(pow)
        {
            if(pow%2==0)
            {
                multiplyBaseMatrix(2);
                pow/=2;
            }
            else
            {
                multiplyWithDiagonal(2);
                pow--;
            }
        }
        long long ans1,ans2;
        ans1=mat1[0][0]*mat[0][0]+mat1[0][1]*mat[1][0];
        ans2=mat1[0][0]*mat[0][1]+mat1[0][1]*mat[1][1];
        cout<<ans1<<endl;


    }
}

